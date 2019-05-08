#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

char a[1010][1010];
int H, W;

int bfs(int h, int w, int cnt)
{
    if (a[h][w] == '#' || h < 0 || w < 0 || h >= H || w >= W) {
        return cnt;
    }
    cnt++;
    for (int i = 0; i < 4; i++) {
        bfs(h + dy[i], w + dx[i], cnt);
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> H >> W;
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    rep(i, H)
    {
        rep(j, W)
        {
            int cnt = 0;
            if (a[i][j] == '.') {
                ans = max(bfs(i, j, cnt), ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}