#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    double ans = 0;
    cin >> a >> b;
    for (int i = 1; i <= a; ++i) {
        double tmp = 1.0 / a;
        int cur = i;
        while (cur < b) {
            cur *= 2;
            tmp /= 2.0;
        }
        ans += tmp;
    }
    printf("%.12f\n", ans);
    return 0;
}