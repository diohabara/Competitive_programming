#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX_HW = 500;
typedef pair<int, int> pint;
typedef pair<pint, pint> ppint;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int H, W, num = 0, odd = 0;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W, 0));
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> a[i][j];
            if (a[i][j] & 1) {
                ++odd;
            }
        }
    }

    vector<ppint> res;
    int x = 0, y = 0;
    rep(i, H * W)
    {
        if (a[x][y] & 1) {
            ++num;
        }
        int nx = x, ny = y;
        if (x % 2 == 0) {
            if (ny == W - 1) {
                ++nx;
            } else {
                ++ny;
            }
        } else {
            if (ny == 0) {
                ++nx;
            } else {
                --ny;
            }
        }
        if (num & 1)
            if (num < odd) {
                res.push_back(ppint(pint(x, y), pint(nx, ny)));
            }
        x = nx, y = ny;
    }

    cout << res.size() << endl;
    for (auto p : res) {
        cout << p.first.first + 1 << " " << p.first.second + 1 << " " << p.second.first + 1 << " " << p.second.second + 1 << endl;
    }
    return 0;
}