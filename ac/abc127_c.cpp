#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    vector<int> gate(n);
    int l, r;
    for (int i = 0; i < n; i++) {
        gate[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        l--;
        gate[l]++;
        gate[r]--;
    }
    for (int i = 0; i < n; i++) {
        gate[i + 1] += gate[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (gate[i] == m) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}