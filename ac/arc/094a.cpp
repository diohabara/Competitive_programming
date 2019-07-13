#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<ll> num(3);
    rep(i, 3) { cin >> num[i]; }
    sort(num.begin(), num.end());
    ll sum = 0;
    for (auto& n : num) {
        sum += n;
    }
    if (sum % 2 == num[2] % 2) {
        cout << (2 * num[2] - num[1] - num[0] + 1) / 2 << endl;
    } else {
        cout << (2 * num[2] - num[1] - num[0] + 1) / 2 + 1 << endl;
    }
    return 0;
}