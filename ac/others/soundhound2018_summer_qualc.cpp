#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    double n, m, d;
    cin >> n >> m >> d;
    // output
    cout << fixed << setprecision(15);
    if (d == 0) {
        cout << 1.0 * (m - 1) / n << endl;
        // printf("%llf\n", 1.0 / n * (m - 1));
    } else {
        cout << 2.0 * (n - d) * (m - 1) / n / n << endl;
        // printf("%llf\n", 2.0 * (n - d) / n / n * (m - 1));
    }
    return 0;
}