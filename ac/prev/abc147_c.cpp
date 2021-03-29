#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX_N = 100;
int N;
int A[MAX_N], x[MAX_N][MAX_N], y[MAX_N][MAX_N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    rep(i, N)
    {
        cin >> A[i];
        rep(j, A[i])
        {
            int tmpx, tmpy;
            cin >> tmpx >> tmpy;
            tmpx--;
            x[i][j] = tmpx, y[i][j] = tmpy;
        }
    }
    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        vector<int> h(N);
        for (int n = 0; n < N; n++) {
            if (bit & (1 << n)) {
                h[n] = 1;
            }
        }
        int cnt = 0;
        rep(i, N)
        {
            if (h[i])
                cnt++;
        }
        bool flag = true;
        rep(i, N)
        {
            if (h[i]) {
                rep(j, A[i])
                {
                    if (h[x[i][j]] != y[i][j]) {
                        flag = false;
                    }
                }
            }
        }
        if (flag)
            ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}