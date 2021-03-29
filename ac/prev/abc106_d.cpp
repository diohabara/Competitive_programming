#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX_N = 550;
int N, M, Q, X[509][509], cnt[509][509];
// cnt[l][r] := 左端がlで右端がr以下の列車の総数

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M, Q;
    cin >> N >> M >> Q;
    rep(i, M) {
        int L, R;
        cin >> L >> R;
        cnt[L][R]++;
    }
    for (int l = 1; l <= N; l++) {
        for (int r = 2; r <= N; r++) {
            cnt[l][r] += cnt[l][r - 1];
        }
    }
    rep(i, Q)
    {
        int p, q;
        cin >> p >> q;
        int sum = 0;
        for (int l = p; l <= q; l++) {
            sum += cnt[l][q];
        }
        cout << sum << endl;
    }

    return 0;
}
