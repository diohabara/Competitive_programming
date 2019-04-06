#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
#define maxH 500
#define maxW 500
int h, w;
char maze[maxH][maxW];
bool reached[maxH][maxW];

void dfs(int y, int x) {
    // if the outside of the maze is a moat, do nothing
    if (x < 0 || w <= x || y < 0 || h <= y || maze[y][x] == '#') {
        return;
    }
    // if dfs reached (x,y) before, do nothing
    if (reached[y][x]) {
        return;
    }
    reached[y][x] = true;

    // try 4 directions
    dfs(y, x + 1);
    dfs(y, x - 1);
    dfs(y + 1, x);
    dfs(y - 1, x);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> h >> w;
    int gx, gy;
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            cin >> maze[y][x];
        }
    }
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            if (maze[y][x] == 's') {
                dfs(y, x);
            }
            if (maze[y][x] == 'g') {
                gx = x;
                gy = y;
            }
        }
    }
    if (reached[gy][gx]) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}