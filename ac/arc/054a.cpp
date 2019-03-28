#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;
    double right = x + y, left = y - x;
    double ans;
    if (d < s) {
        if (left < 0) {
            ans = abs(l - s + d) / right;
        } else {
            ans = min(abs((d - s) / left), abs((l - s + d) / right));
        }
    } else {
        if (left < 0) {
            ans = abs(d - s) / right;
        } else {
            ans = min(abs((d - s) / right), abs((l - d + s) / left));
        }
    }
    printf("%.9lf\n", ans);
    return 0;
}