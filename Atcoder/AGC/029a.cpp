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
    int cnt = 0, tmp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W') {
            cnt += tmp;
        } else {
            tmp++;
        }
    }
    cout << cnt << endl;
    return 0;
}