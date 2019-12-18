#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
ll factorial_count(ll N)
{
    vector<int> count(1003, 0); // 約数の候補

    for (int i = 2; i <= N; i++) { // すべての候補を探す
        int t = i;
        for (int p = 2; p <= t; p++) { // ここでは約数を求めている
            while (t % p == 0) {
                count[p]++;
                t /= p;
            }
        }
    }

    ll ans = 1;
    for (auto x : count) {
        ans = ans * (x + 1) % MOD;
    }
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = factorial_count(n);
    cout << ans << endl;

    return 0;
}