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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    vector<ll> a[3]; // a[0]=綺麗さ a[1]=おいしさ a[2]=人気度
    rep(i, N)
    {
        rep(j, 3)
        {
            int tmp;
            cin >> tmp;
            a[j].push_back(tmp);
        }
    }

    ll maxv = 0;
    for (int bit = 0; bit < (1 << 3); ++bit) {
        vector<ll> vec;
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
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        ll sum = 0;
        rep(i, M)
        {
            sum += vec[i];
        }
        maxv = max(maxv, sum);
    }
    cout << maxv << endl;
    return 0;
}