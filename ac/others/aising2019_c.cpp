#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
#define MAX_N 400

bool color[MAX_N][MAX_N];
int H, W;
typedef pair<int, int> P;

char ch[MAX_N + 1];

bool isin_(int y, int x)
{
    return 0 <= y && y < H && 0 <= x && x < W;
}

bool check_(int y, int x, int d)
{
    int ny = y + dy[d];
    int nx = x + dx[d];
    if (!isin_(ny, nx)) {
        return false;
    }
    if (color[y][x] == color[ny][nx]) {
        return false;
    }
    return true;
}

bool used[MAX_N][MAX_N];

ll solve()
{
    ll ans = 0;
    ll b = 0, w = 0;
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            if (used[y][x]) {
                continue;
            }
            b = 0;
            w = 0;
            queue<P> que;
            used[y][x] = true;
            que.push(P(y, x));
            while (!que.empty()) {
                P p = que.front();
                que.pop();
                int cur_y = p.first, cur_x = p.second;
                if (color[cur_y][cur_x]) {
                    b++;
                } else {
                    w++;
                }
                for (int d = 0; d < 4; ++d) {
                    if (!check_(cur_y, cur_x, d)) {
                        continue;
                    }
                    int ny = cur_y + dy[d], nx = cur_x + dx[d];
                    if (used[ny][nx]) {
                        continue;
                    }
                    used[ny][nx] = true;
                    que.push(P(ny, nx));
                }
            }
            ans += b * w;
        }
    }
    return ans;
}

int main()
{
    cin >> H >> W;
    rep(i, H)
    {
        rep(j, W)
        {
            char t;
            cin >> t;
            color[i][j] = t == '#';
        }
    }
    ll ans = solve();
    cout << ans << endl;
    return 0;
}
