#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    char cur = S[0];
    ll ans = 1;
    for (int i = 1; i < (int)S.size(); ++i) {
        if (cur >= S[i]) {
            cur = S[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}