#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string T, P;
    cin >> T >> P;
    for (int ti = 0; ti <= (int)(T.size() - P.size()); ti++) {
        int tmp = 0;
        for (int si = 0; si < (ll)P.size(); si++) {
            if (T[ti + si] == P[si]) {
                tmp++;
            }
        }
        // cout << ti << endl;
        if (tmp == (ll)P.size()) {
            cout << ti << endl;
        }
    }
    return 0;
}