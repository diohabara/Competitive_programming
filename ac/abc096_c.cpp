#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
ll H, W;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H >> W;
    char s[55][55];
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> s[i][j];
        }
    }
    rep(i, H)
    {
        rep(j, W)
        {
            if (s[i][j] == '#' && s[i + 1][j] != '#' && s[i - 1][j] != '#' && s[i][j + 1] != '#' && s[i][j - 1] != '#') {
                puts("No");
                return 0;
            }
        }
    }
    puts("Yes");
    return 0;
}