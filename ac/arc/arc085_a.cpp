#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n ; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    cout << ((1900 * M) + 100 * (N - M)) * pow(2, M) << endl;
    return 0;
}