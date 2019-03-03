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
        if (s[i] == 'O' || s[i] == 'D') {
            s[i] = '0';
        } else if (s[i] == 'I') {
            s[i] = '1';
        } else if (s[i] == 'Z') {
            s[i] = '2';
        } else if (s[i] == 'S') {
            s[i] = '5';
        } else if (s[i] == 'B') {
            s[i] = '8';
        }
    }
    cout << s << endl;
    return 0;
}