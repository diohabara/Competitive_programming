#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<vector<ll>> jobs(M);
    priority_queue<int> pq;
    ll ans = 0;
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        if (a > M) {
            continue;
        }
        jobs[M-a].push_back(b);
    }
    for (int i = M - 1; i >= 0; i--) {
        for (auto& b : jobs[i]) {
            pq.push(b);
        }
        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans << endl;
    return 0;
}