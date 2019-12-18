#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s, txt;
    int n;
    cin >> s;
    n = s.size();
    int sum = 0;
    for (int bit = 0; bit < 1 << (n - 1); bit++) {
        int sum = s[0] - '0';
        txt = s[0];
        for (int j = 0; j < n - 1; j++) {
            int a = s[j + 1] - '0';
            if (bit & (1 << j)) {
                sum += a;
                txt += "+";
                txt += s[j + 1];
            } else {
                sum -= a;
                txt += "-";
                txt += s[j + 1];
            }
        }
        if (sum== 7) {
            cout << txt << "=7" << endl;
            return 0;
        } else {
            sum = 0;
        }
    }
    return 0;
}