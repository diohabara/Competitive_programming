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
int N;

signed main()
{
    cin >> N;
    vector<string> x(N);
    rep(i, N)
    {
        cin >> x[i];
    }
    int cnt = 0;
    vector<int> state(9);
    rep(i, N)
    {
        rep(j, 9)
        {
            if (x[i][j] == 'x') {
                state[j] = 0;
                ++cnt;
            } else if (x[i][j] == 'o') {
                if (state[j] == 0) {
                    state[j] = 1;
                    ++cnt;
                }
            } else {
                state[j] = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}