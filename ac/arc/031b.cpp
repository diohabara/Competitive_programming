#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
#define maxH 10
#define maxW 10
char land[maxH][maxW];
bool reached[maxH][maxW] = {};
int cnt;
void dfs(int y, int x) {
    if (x < 0 || maxH <= y || y < 0 || maxW <= x || land[y][x] == 'x') {
        return;
    }
    if (reached[y][x]) {
        return;
    }
    reached[y][x] = true;

    cnt++;

    dfs(y, x + 1);
    dfs(y, x - 1);
    dfs(y + 1, x);
    dfs(y - 1, x);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int num = 0;
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            cin >> land[y][x];
            if (land[y][x] == 'o') {
                num++;
            }
        }
    }

    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            cnt = 0;
            if (land[y][x] == 'x') {
                rep(i, 10) {
                    rep(j, 10) { reached[i][j] = false; }
                }
                land[y][x] = 'o';
                dfs(y, x);
                land[y][x] = 'x';
            }
            if (cnt == num + 1) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}