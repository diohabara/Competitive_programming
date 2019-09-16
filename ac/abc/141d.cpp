#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

ll pow2(ll n)
{
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return pow2(n / 2) * pow2(n / 2);
    }
    return 2 * pow2(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    priority_queue<ll> A;
    rep(i, N)
    {
        int v;
        cin >> v;
        A.push(v);
    }
    for (int i = 0; i < M; i++) {
        int v = A.top()/2;
        A.pop();
        A.push(v);
    }
    ll sum = 0;
    while(!A.empty()) {
        sum += A.top();
        A.pop();
    }
    cout << sum << endl;
    return 0;
}