#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll A, B, Q;
    cin >> A >> B >> Q;
    vector<ll> s(A), t(B), x(Q);
    rep(i, A) { cin >> s[i]; }
    rep(i, B) { cin >> t[i]; }
    rep(i, Q) { cin >> x[i]; }
    return 0;
}