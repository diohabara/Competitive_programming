#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
ll comb(ll n, ll k) {
    map<string, ll> memo;
    if (n == k || k == 0)
        return 1;
    else {
        string key = to_string(n) + to_string(k);
        if (memo.count(key) != 0) {
            return memo[key];
        } else {
            ll out = comb(n - 1, k - 1) + comb(n - 1, k);
            memo[key] = out;
            return out;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    ll k_0 = 0, k_2 = 0;
    if (k % 2 == 1) {
        for (int i = 1; i <= n; i++) {
            if (i % k == 0) {
                k_0++;
            }
        }
        if (k_0 == 1) {
            cnt = 1;
        } else {
            cnt = pow(k_0, 3);
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % k == 0) {
                k_0++;
            }
            if (i % k == k / 2) {
                k_2++;
            }
        }
        if (k_2 <= 1 && k_0 <= 1) {
            cnt = k_2 + k_0;
        } else if (k_2 <= 1 && k_0 > 1) {
            cnt = k_2 + pow(k_0, 3);
        } else {
            cnt = pow(k_2, 3) + pow(k_0, 3);
        }
    }
    cout << cnt << endl;
    return 0;
}