#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

signed main()
{
    string s;
    cin >> s;
    int N = s.size();
    rep(i, N - 1)
    {
        if (s[i] == s[i + 1]) {
            printf("%d %d\n", i + 1, i + 2);
            return 0;
        }
    }
    rep(i, N - 2)
    {
        if (s[i] == s[i + 2]) {
            printf("%d %d", i + 1, i + 3);
            return 0;
        }
    }
    printf("%d %d\n", -1, -1);
    return 0;
}