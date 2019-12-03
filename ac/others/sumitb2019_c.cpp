#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll X;
ll cnt, rem;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> X;

    cnt = X / 100;
    rem = X % 100;
    if (rem <= cnt * 5) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}