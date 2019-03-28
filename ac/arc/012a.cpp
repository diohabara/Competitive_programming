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
    if (s[0] == 'S') {
        cout << 0 << endl;
    } else if (s[0] == 'M') {
        cout << 5 << endl;
    } else if (s[0] == 'W') {
        cout << 3 << endl;
    } else if (s[0] == 'F') {
        cout << 1 << endl;
    } else if (s == "Tuesday") {
        cout << 4 << endl;
    } else {
        cout << 2 << endl;
    }
    return 0;
}