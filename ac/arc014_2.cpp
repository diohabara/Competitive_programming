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
    ll N;
    cin >> N;
    map<string, int> wcnt;
    char lw;
    rep(i, N)
    {
        string w;
        cin >> w;
        if (i % 2 == 0) { // くん
            wcnt[w]++;
            if (i == 0) {
                lw = w.back();
                continue;
            }
            if (wcnt[w] > 1 || w.front() != lw) {
                puts("LOSE");
                return 0;
            }
            lw = w.back();
        } else { // クン
            wcnt[w]++;
            if (wcnt[w] > 1 || w.front() != lw) {
                puts("WIN");
                return 0;
            }
            lw = w.back();
        }
    }
    puts("DRAW");
    return 0;
}