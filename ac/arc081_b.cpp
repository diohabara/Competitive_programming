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
string S1, S2;

enum {
    def,
    vert,
    hori,
};

signed main()
{
    cin >> N;
    cin >> S1 >> S2;
    ll ans;
    int status = def;
    for (int i = 0; i < N; i++) {
        if (S1[i] == S2[i]) {
            if (status == vert) {
                ans *= 2;
                ans %= MOD;
            } else if (status == hori) {
                // do nothing
            } else {
                ans = 3;
            }
            status = vert;
        } else {
            if (status == hori) {
                ans *= 3;
                ans %= MOD;
            } else if (status == vert) {
                ans *= 2;
                ans %= MOD;
            } else {
                ans = 6;
            }
            status = hori;
            ++i;
        }
    }
    cout << ans << endl;
    return 0;
}