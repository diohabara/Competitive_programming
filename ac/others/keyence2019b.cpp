#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            string tmp = s;
            if (tmp.erase(i, j) == "keyence") {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}