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
  // initialization
  for (int i = 0; i < ) }

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