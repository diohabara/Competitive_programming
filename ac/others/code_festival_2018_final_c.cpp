#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e10;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N;
    vector<pair<ll, ll>> p(N+2);
    rep(i, N)
    {
        cin >> p[i].first >> p[i].second;
    }
    p[N] = make_pair(0, INF);
    p[N + 1] = make_pair(INF, INF);
    sort(p.begin(), p.end());

    cin >> M;
    rep(i, M)
    {
        ll t;
        cin >> t;
        // t以上の要素が出てくる最初の要素の位置
        auto l = lower_bound(p.begin(), p.end(), make_pair(t, 0ll)) - p.begin();

        // t以上で一番近いプランか,t未満で一番近いプラン
        cout << min(p[l].second, p[l - 1].second + (t - p[l - 1].first)) << endl;
    }
    return 0;
}