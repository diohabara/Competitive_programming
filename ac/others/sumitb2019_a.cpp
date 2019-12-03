#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m1, m2, d1, d2;
    cin >> m1 >> d1;
    cin >> m2 >> d2;
    if (m1 == m2) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}