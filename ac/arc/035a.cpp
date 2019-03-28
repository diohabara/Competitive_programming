#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[s.size() - 1 - i] && s[i] != '*' &&
            s[s.size() - 1 - i] != '*') {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}