#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            b++;
        } else {
            r++;
        }
    }
    if (r > b) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}