#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N;
string S;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    cin >> S;
    int lpar = 0;
    int rpar = 0;
    rep(i, N)
    {
        if (S[i] == '(') {
            ++rpar;
        } else {
            if (rpar == 0) {
                ++lpar;
            } else {
                --rpar;
            }
        }
    }
    string res = "";
    rep(i, lpar) {
        res += "(";
    }
    res += S;
    rep(i, rpar) {
        res += ")";
    }
    cout << res << endl;
    return 0;
}