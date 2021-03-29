#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
ll N, M;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    ll l, r, s;
    vector<ll> arr(M + 1);
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        cin >> l >> r >> s;
        l--;
        arr[l] += s;
        arr[r] -= s;
        ans += s;
    }

    ll min_n = 1e9;
    for (ll i = 0; i < M; i++) {
        arr[i + 1] += arr[i];
    }
    for (ll i = 0; i < M; i++) {
        min_n = min(min_n, arr[i]);
    }
    cout << ans - min_n << endl;
    return 0;
}