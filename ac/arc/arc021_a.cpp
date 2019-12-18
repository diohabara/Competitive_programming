#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a[4][4];
    rep(y, 4) {
        rep(x, 4) { cin >> a[y][x]; }
    }
    rep(y, 4) {
        rep(x, 4) {
            if (y - 1 >= 0) {
                if (a[y][x] == a[y - 1][x]) {
                    puts("CONTINUE");
                    return 0;
                }
            }
            if (y + 1 <= 3) {
                if (a[y][x] == a[y + 1][x]) {
                    puts("CONTINUE");
                    return 0;
                }
            }
            if (x - 1 >= 0) {
                if (a[y][x] == a[y][x - 1]) {
                    puts("CONTINUE");
                    return 0;
                }
            }
            if (x + 1 <= 3) {
                if (a[y][x] == a[y][x + 1]) {
                    puts("CONTINUE");
                    return 0;
                }
            }
        }
    }
    puts("GAMEOVER");
    return 0;
}