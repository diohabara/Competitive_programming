#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    double a, b;
    cin >> n >> a >> b;
    vector<ll> s;
    s.resize(n);
    rep(i, n) { cin >> s[i]; }
    double ave = 0;
    ll maxA = -1, minA = 1e9;
    rep(i, n) {
        ave += s[i];
        maxA = max(s[i], maxA);
        minA = min(s[i], minA);
    }
    ave /= n;
    if (maxA - minA == 0) {
        cout << -1 << endl;
        return 0;
    }
    double p = b / (maxA - minA);
    double q = a - ave * p;
    printf("%lf %lf\n", p, q);
    return 0;
}