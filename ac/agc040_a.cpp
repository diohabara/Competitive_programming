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
    string S;
    cin >> S;
    int n = S.size() + 1;
    vector<ll> a(n);
    rep(i, n - 1)
    {
        if (S[i] == '<') {
            a[i + 1] = a[i] + 1;
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (S[i] == '>') {
            if (a[i + 1] >= a[i]) {
                a[i] = a[i + 1] + 1;
            }
        }
    }
    cout << accumulate(a.begin(), a.end(), 0ll) << endl;
    return 0;
}