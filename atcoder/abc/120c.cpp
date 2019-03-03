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
    int n = s.size();
    int red = 0, blue = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            red++;
        } else {
            blue++;
        }
    }
    cout << min(red, blue) * 2 << endl;
    return 0;
}