#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int H, W, N;
int ans[1000][1000];

signed main()
{
    cin >> H >> W;
    cin >> N;
    vector<int> a(N);
    rep(i, N) { cin >> a[i]; }
    vector<int> b(H * W);
    int cnt = 0;
    rep(i, N)
    {
        rep(j, a[i])
        {
            b[cnt] = i + 1;
            cnt++;
        }
    }
    vector<vector<int>> c(H, vector<int>(W));
    rep(i, H)
    {
        rep(j, W)
        {
            c[i][j] = b[i * W + j];
        }
    }
    rep(i, H)
    {
        if (i % 2) {
            reverse(c[i].begin(), c[i].end());
        }
    }
    rep(i, H)
    {
        rep(j, W)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}