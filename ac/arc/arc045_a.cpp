#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    string ans;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            ans += "< ";
        }
        if (s[i] == 'R') {
            ans += "> ";
        }
        if (s[i] == 'A') {
            ans += "A ";
        }
    }
    ans.erase(ans.size() - 1);
    cout << ans << endl;
    return 0;
}