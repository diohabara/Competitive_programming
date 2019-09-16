#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // 奇数
            if (s[i] == 'L') {
                puts("No");
                return 0;
            }
        } else {
            if (s[i] == 'R') {
                puts("No");
                return 0;
            }
        }
    }
    puts("Yes");
    return 0;
}