#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll N, H;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> H;
    ll maxa = 0, cnt = 0;
    vector<ll> a(N), b(N);
    rep(i, N)
    {
        cin >> a[i] >> b[i];
        maxa = max(maxa, a[i]);
    }
    sort(b.begin(), b.end(), greater<ll>());
    rep(i, N)
    {
        if (b[i] > maxa) {
            H -= b[i];
            ++cnt;
            if (H <= 0) {
                cout << cnt << endl;
                return 0;
            }
        }
    }
    cnt += (H + (maxa - 1)) / maxa;
    cout << cnt << endl;

    return 0;
}