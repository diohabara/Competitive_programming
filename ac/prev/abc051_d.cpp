#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (size_t i = 0; i < (size_t)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    int a[1000], b[1000], c[1000], dist[100][100];
    rep(i, N)
    {
        rep(j, N)
        {
            dist[i][j] = INF;
        }
        dist[i][i] = 0;
    }
    rep(i, M)
    {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--, b[i]--;
        dist[a[i]][b[i]] = c[i];
        dist[b[i]][a[i]] = c[i];
    }

    rep(k, N)
    {
        rep(i, N)
        {
            rep(j, N)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    int res = 0;
    rep(i, M)
    {
        if (c[i] > dist[a[i]][b[i]]) {
            ++res;
        }
    }
    cout << res << endl;

    return 0;
}