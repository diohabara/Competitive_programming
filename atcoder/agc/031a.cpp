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
    string s;
    cin >> s;
    bool cnt_str[26] = {};
    int cnt = 0;
    rep(i, n) {
        if (cnt_str[s[i] - 'a']) {
            cnt++;
        } else {
            cnt_str[s[i] - 'a'] = true;
        }
    }

    return 0;
}