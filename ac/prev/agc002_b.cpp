#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N, M;

signed main()
{
    cin >> N >> M;
    vector<int> num(N, 1);
    vector<bool> red(N);
    red[0] = true;
    rep(i, M)
    {
        int x, y;
        cin >> x >> y;
        --x, --y;

        if (red[x]) {
            red[y] = true;
        }
        --num[x], ++num[y];
        if (num[x] == 0) {
            red[x] = false;
        }
    }
    int res = count(all(red), true);
    cout << res << endl;
    return 0;
}