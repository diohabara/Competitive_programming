#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

const int coin[4] = { 1, 5, 10, 25 };

void greedy(int& minv, int& acc, int coin)
{
    minv += acc / coin;
    acc %= coin;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int mincoin = 0;
    rep(i, 4) {
        greedy(mincoin, n, coin[3- i]);
    }
    cout << mincoin << endl;

    return 0;
}