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
        if (s[i] == 'i' || s[i] == 'I') {
            for (int j = i; j < s.size(); j++) {
                if (s[j] == 'c' || s[j] == 'C') {
                    for (int k = j; k < s.size(); k++) {
                        if (s[k] == 't' || s[k] == 'T') {
                            puts("YES");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    puts("NO");
    return 0;
}