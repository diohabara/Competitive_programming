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
    ll R, C;
    cin >> R >> C;
    ll ans = 0;
    for (int x = C; x <= R; x += C) {
        for (int y = C; y <= R; y += C) {
            if (x * x + y * y <= R * R) {
                ans++;
            }
        }
    }
    cout << 4 * ans << endl;
    return 0;
}