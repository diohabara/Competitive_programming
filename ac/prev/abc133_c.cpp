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
    ll L, R;
    cin >> L >> R;
    if (R - L >= 2019) {
        cout << 0 << endl;
        return 0;
    }
    L %= 2019;
    R %= 2019;
    int ans = 2019;
    for (int i = L; i <= R; i++) {
        for (int j = i + 1; j <= R; j++) {
            ans = min(ans, i * j % 2019);
            if (ans == 0) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}