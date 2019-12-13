#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 998244353;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    vector<ll> D(N);
    map<ll, ll> cnt;
    rep(i, N)
    {
        cin >> D[i];
        cnt[D[i]]++;
    }
    ll res = 0;
    if (D[1] != 0) {
        cout << 0 << endl;
    } else {
        for (int i = 1; i < N; ++i) {
            if (cnt[D[i]] == 0) {
                cout << 0 << endl;
                return 0;
            }
        }
        int minv = 1;
        int len = cnt.size();
        for (int i = 1; i < len; ++i) {
            res *= minv()
        }
    }

    return 0;
}