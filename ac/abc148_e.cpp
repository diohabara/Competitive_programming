#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll N;

ll get_num(ll n, ll acc = 1)
{
    if (n < 10) {
        return acc;
    } else {
        return n / 10 * get_num(n / 10, acc);
    }
}

signed main()
{
    cin >> N;
    cout << N << endl;
    if (N % 2 == 1 || N < 10) {
        cout << 0 << endl;
        return 0;
    } else {
        cout << get_num(N) << endl;
    }
    return 0;
}