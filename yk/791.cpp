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
    if (s[0] != '1' || s == "1") {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != '3') {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << s.size() - 1 << endl;
    return 0;
}