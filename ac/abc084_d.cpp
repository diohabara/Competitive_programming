#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX_N = 100000;
int Q;
bool primes[MAX_N + 1]; // 素数であるかどうか(true->素数,false->not素数)
int cnt[MAX_N + 2];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> Q;
    memset(primes, true, sizeof(primes));
    for (int i = 2; i <= MAX_N; ++i) {
        if (primes[i]) {
            for (int j = i + i; j <= MAX_N; j += i) {
                primes[j] = false;
            }
        }
    }
    for (int i = 3; i <= 100000; i += 2) {
        if (primes[i] && primes[(i + 1) / 2]) {
            ++cnt[i];
        }
    }

    for (int i = 3; i <= 100000; ++i) {
        cnt[i] += cnt[i - 1];
    }

    rep(i, Q)
    {
        ll l, r;
        cin >> l >> r;
        cout << cnt[r] - cnt[l - 1] << endl;
    }
    return 0;
}