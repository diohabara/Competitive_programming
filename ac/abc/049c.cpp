#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    reverse(s.begin(), s.end());
    for (int i = 0; i < n;) {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'e' && s[i + 3] == 'r' && s[i + 4] == 'd') {
            i += 5;
        } else if (s[i] == 'e' && s[i + 1] == 's' && s[i + 2] == 'a' && s[i + 3] == 'r' && s[i + 4] == 'e') {
            i += 5;
        } else if (s[i] == 'r' && s[i + 1] == 'e' && s[i + 2] == 'm' && s[i + 3] == 'a' && s[i + 4] == 'e' && s[i + 5] == 'r' && s[i + 6] == 'd') {
            i += 7;
        } else if (s[i] == 'r' && s[i + 1] == 'e' && s[i + 2] == 's' && s[i + 3] == 'a' && s[i + 4] == 'r' && s[i + 5] == 'e') {
            i += 6;
        } else {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}