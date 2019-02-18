#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x[3], y[3], r;
    cin >> x[0] >> y[0] >> r;
    for (int i = 1; i <= 2; i++) {
        cin >> x[i] >> y[i];
    }
    // blue
    if ((x[1] <= x[0] - r && x[0] + r <= x[2]) &&
        (y[1] <= y[0] - r && y[0] + r <= y[2])) {
        puts("NO");
    } else {
        puts("YES");
    }
    // red
    if (((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]) <=
             r * r &&
         (x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]) <=
             r * r) &&
        pow(x[1] - x[0], 2) + pow(y[2] - y[0], 2) <= r * r &&
        pow(x[2] - x[0], 2) + pow(y[1] - y[0], 2) <= r * r) {
        puts("NO");
    } else {
        puts("YES");
    }
    return 0;
}