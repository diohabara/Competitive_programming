#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, l;
    cin >> n >> l;
    string s;
    cin >> s;
    int cnt = 1, ans = 0;
    rep(i, n) {
        if (s[i] == '+') {
            cnt++;
        } else {
            cnt--;
        }
        if (cnt > l) {
            cnt = 1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}