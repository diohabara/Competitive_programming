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
    ll N;
    ll h, n, w;
    cin >> N;
    for (h = 1; h <= 3500; ++h) {
        for (n = 1; n <= 3500; ++n) {
            if (4 * h * n - N * n - N * h != 0) {
                w = (N * h * n) / (4 * h * n - N * n - N * h);
                if (w > 0 && (N * h * n) % (4 * h * n - N * (n + h)) == 0) {
                    printf("%lld %lld %lld\n", h, n, w);
                    return 0;
                }
            }
        }
    }
    return 0;
}