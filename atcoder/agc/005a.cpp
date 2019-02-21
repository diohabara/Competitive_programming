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
    stack<char> ans;
    for (int i = 0; i < s.size(); i++) {
        if (ans.empty()) {
            ans.push(s[i]);
        } else if (ans.top() == 'S' && s[i] == 'T') {
            ans.pop();
        } else {
            ans.push(s[i]);
        }
    }
    cout << ans.size() << endl;
    return 0;
}