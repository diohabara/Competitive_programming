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
    ll N;
    cin >> N;
    vector<ll> C(N), S(N), F(N);
    rep(i, N-1) {
        cin >> C[i] >> S[i] >> F[i];
    }
    rep(i, N) {
        ll t = 0; // i回目の値
        for (ll j = i; j < N - 1;++j) {
            if (t < S[j]) {
                t = S[j];
            } else if (t % F[j] == 0) {
                ;
            } else {
                t += F[j] - t % F[j];
            }
            t += C[j];
        }
        cout << t << endl;
    }
    return 0;
}