#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

signed main()
{
    int a, b;
    cin >> a >> b;
    rep(i, 3)
    {
        if (i + 1 != a && i + 1 != b) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}