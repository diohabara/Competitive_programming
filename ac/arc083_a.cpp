#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // input
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    bool x[3001] = {}, y[3001] = {};
    // all combination available with a & b
    for (int i = 0; 100 * a * i <= f; i++) {
        for (int j = 0; 100 * a * i + 100 * b * j <= f; j++) {
            x[100 * a * i + 100 * b * j] = true;
        }
    }
    // all combination available with c & d
    for (int i = 0; c * i <= f; i++) {
        for (int j = 0; c * i + d * j <= f; j++) {
            y[c * i + d * j] = true;
        }
    }
    int ans1 = 100 * a, ans2 = 0;
    for (int i = 0; i <= f; i++) {
        for (int j = 0; j <= f; j++) {
            if (x[i] && y[j] && ans2 * (i + j) < j * ans1 && j * (e + 100) <= (i + j) * e && i + j <= f) {
                ans1 = i + j;
                ans2 = j;
            }
        }
    }
    printf("%d %d\n", ans1, ans2);
}