#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double a, b, x, theta;
    cin >> a >> b >> x;
    if (x > a * a * b / 2) {
        theta = atan(2 * (a * a * b - x) / (a * a * a));
    } else {
        theta = atan((a * b * b) / (2 * x));
    }
    theta = theta * 180 / M_PI;
    printf("%.7lf\n", theta);
    return 0;
}