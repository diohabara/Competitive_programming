#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll N, W;
vector<pair<double, double>> pack;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> W;
    pack.resize(N);
    rep(i, N)
    {
        double v, w;
        cin >> v >> w;
        pack[i].first = v / w;
        pack[i].second = w;
    }

    sort(pack.rbegin(), pack.rend());
    double sum_w = 0, sum_v = 0;
    rep(i, N)
    {
        if (W - (sum_w + pack[i].second) > 0) {
            sum_v += pack[i].first * pack[i].second;
            sum_w += pack[i].second;
        } else if (W - sum_w > 0) {
            sum_v += pack[i].first * (W - sum_w);
            sum_w = W;
        }
    }
    printf("%lf\n", sum_v);

    return 0;
}