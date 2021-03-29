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
    ll N;
    cin >> N;
    vector<string> S(N);
    vector<ll> march(5);
    rep(i, N)
    {
        cin >> S[i];
        switch (S[i][0]) {
        case 'M':
            march[0]++;
            break;
        case 'A':
            march[1]++;
            break;
        case 'R':
            march[2]++;
            break;
        case 'C':
            march[3]++;
            break;
        case 'H':
            march[4]++;
            break;
        default:
            break;
        }
    }
    ll cnt = 0;
    rep(i, 5)
    {
        if (march[i] > 0) {
            cnt++;
        }
    }
    ll ans = 0;
    if (cnt < 3) {
        cout << 0 << endl;
        return 0;
    } else {
        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                for (int k = j + 1; k < 5; ++k) {
                    ans += march[i] * march[j] * march[k];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}