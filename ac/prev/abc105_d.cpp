#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    map<ll, ll> mp; // mp[累積の値のmod] := そのような値に成る部分数列の数
    ll acc = 0; // 累積の値
    mp[acc]++;
    rep(i, N)
    {
        acc += A[i];
        mp[acc % M]++;
    }
    ll res = 0;
    for (auto& v : mp) {
        res += v.second * (v.second - 1) / 2;
    }
    cout << res << endl;
    return 0;
}