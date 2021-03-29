#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> s;
    s.resize(n);
    rep(i, n) { cin >> s[i]; }
    int r = 0, b = 0;
    rep(i, n) {
        rep(j, n) {
            if (s[i][j] == 'R') {
                r++;
            }
            if (s[i][j] == 'B') {
                b++;
            }
        }
    }
    if (r > b) {
        puts("TAKAHASHI");
    } else if (r < b) {
        puts("AOKI");
    } else {
        puts("DRAW");
    }
    return 0;
}