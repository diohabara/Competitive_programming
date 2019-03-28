#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    bool g[4][4];
    rep(i, 4) {
        rep(j, 4) { g[i][j] = false; }
    }
    rep(i, 3) {
        int a, b;
        cin >> a >> b;
        g[a - 1][b - 1] = true;
        g[b - 1][a - 1] = true;
    }
    int cnt1 = 0, cnt2 = 0;
    rep(i, 4) {
        int tmp = 0;
        rep(j, 4) { if (g[i][j]) {
                tmp++;
            }
        }
        if (tmp == 1) {
            cnt1++;
        } else if (tmp == 2 ){
            cnt2++;
        }
    }
    if (cnt1 == 2 && cnt2 == 2) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}