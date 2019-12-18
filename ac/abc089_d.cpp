#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int H, W, D, A;
int Q, L, R;
int px[90001], py[90001]; // 整数iは(px[i],py[i])にいる
int dist[90001]; //

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H >> W >> D;
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> A;
            px[A] = i, py[A] = j;
        }
    }
    for (int i = D + 1; i <= H * W; ++i) {
        dist[i] = dist[i - D] + abs(px[i] - px[i - D]) + abs(py[i] - py[i - D]);
    }
    cin >> Q;
    rep(loop, Q)
    {
        cin >> L >> R;
        cout << dist[R] - dist[L] << endl;
    }

    return 0;
}