#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
const ll MOD = 1000000007;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n;
    cin >> s;
    ll cnt[30] = {};
    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'a']++;
    }
    ll ans = 1;
    for (int i = 0; i < 30; i++) {
        ans = ans * (cnt[i] + 1) % MOD;
    }
    cout << (ans - 1 + MOD) % MOD << endl;

    return 0;
}