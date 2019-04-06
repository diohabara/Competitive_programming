#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
#define maxR 50
#define maxC 50
char maze[maxR][maxR] = {};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx;
    cin >> gy >> gx;
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            cin >> maze[y][x];
        }
    }
    return 0;
}