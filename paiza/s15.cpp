#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int k, s, t;
    cin >> k >> s >> t;
    string ans;
    rep(i, k) { ans = "A" + ans + "B" + ans + "C"; }
    for (int i = s - 1; i < t; i++) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}