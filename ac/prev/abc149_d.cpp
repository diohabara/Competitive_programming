#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll N, K;
ll R, S, P;
string T;

signed main()
{
    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;
    ll res = 0;
    string str = "";
    rep(i, N)
    {
        if (T[i] == 'r') { // P
            str += "p";
        } else if (T[i] == 's') { // R
            str += "r";
        } else { // S
            str += "s";
        }
    }
    for (int i = K; i < N; ++i) {
        if (str[i - K] == str[i]) {
            str[i] = '*';
        }
    }
    rep(i, N)
    {
        if (str[i] == 'p') {
            res += P;
        } else if (str[i] == 'r') {
            res += R;
        } else if (str[i] == 's') {
            res += S;
        }
    }
    cout << res << endl;
    return 0;
}