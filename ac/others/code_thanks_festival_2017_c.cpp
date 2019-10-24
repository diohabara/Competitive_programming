#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N), b(N);
    rep(i, N)
    {
        cin >> a[i] >> b[i];
    }
    min_priority_queue<pair<ll, ll>> que;
    rep(i, N){ que.push({ a[i], i }); };

    ll ans = 0;
    rep(i, K)
    {
        auto p = que.top();
        que.pop();
        ans += p.first;
        que.push({ p.first + b[p.second], p.second });
    }
    cout << ans << endl;

    return 0;
}