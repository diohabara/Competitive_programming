#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N;

signed main()
{
    cin >> N;
    vector<int> a(N);
    rep(i, N) { cin >> a[i]; }
    int cnt = 1;
    rep(i, N)
    {
        if (cnt == a[i]) {
            cnt++;
        }
    }
    if (cnt != 1) {
        cout << N - cnt + 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}