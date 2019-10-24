#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

vector<pair<ll, ll>> prime_factorize(ll n)
{
    vector<pair<ll, ll>> res;
    for (ll p = 2; p * p <= n; ++p) {
        if (n % p != 0) {
            continue;
        }
        int num = 0;
        while (n % p == 0) {
            ++num;
            n /= p;
        }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) {
        res.push_back(make_pair(n, 1));
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, P;
    cin >> N >> P;
    auto fac = prime_factorize(P);
    ll res = 1;
    for (auto p : fac) {
        for (int j = 0; j < p.second / N; ++j) {
            res *= p.first;
        }
    }
    cout << res << endl;
    return 0;
}