#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N, M;

int main()
{
    cin >> N >> M;
    vector<long long> a[3];
    rep(i, N)
    {
        rep(j, 3)
        {
            ll tmp;
            cin >> tmp;
            a[j].emplace_back(tmp);
        }
    }
    ll maxv = 0;
    for (int bit = 0; bit < (1 << 3); ++bit) {
        vector<ll> b;
        rep(i, N)
        {
            ll tmp = 0;
            rep(j, 3)
            {
                if (bit & (1 << j)) {
                    tmp += a[j][i];
                } else {
                    tmp -= a[j][i];
                }
            }
            b.emplace_back(tmp);
        }
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        ll sum = 0;
        for (int i = 0; i < M; ++i) {
            sum += b[i];
        }
        maxv = max(maxv, sum);
    }
    cout << maxv << endl;
}