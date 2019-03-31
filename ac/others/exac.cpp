#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, q;
    cin >> n >> q;
    string s, l, r;
    cin >> s;
    vector<char> t, d;
    t.resize(q);
    d.resize(q);
    for (int i = 0; i < q; i++) {
        cin >> t[i] >> d[i];
        if (d[i] == 'L') {
            l += t[i];
        } else {
            r = t[i] + r;
        }
    }
    ll cnt = 0;
    for (int i = 0; i < l.size(); i++) {
        if (s[i] == l[i]) {
            cnt++;
        } else {
            break;
        }
    }
    for (int i = 0; i < r.size(); i++) {
        if (s[n - 1 - i] == r[r.size() - 1 - i]) {
            cnt++;
        } else {
            break;
        }
    }
    cout << n - cnt << endl;
    return 0;
}