#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

bool IsPrime(int num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<ll> primes;
    for (int i = 2; i <= 55555; i++) {
        if (IsPrime(i)) {
            primes.push_back(i);
        }
    }
    vector<ll> ans;
    for (auto p : primes) {
        if (p % 5 == 1) {
            ans.push_back(p);
        }
    }
    rep(i, N)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}