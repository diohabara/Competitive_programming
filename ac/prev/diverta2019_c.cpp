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

ll count(const string& s)
{
    ll res = 0;
    rep(i, s.size() - 1)
    {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ++res;
        }
    }
    return res;
}

signed main()
{
    cin >> N;
    ll a = 0, b = 0, c = 0;
    ll cnt = 0;
    rep(i, N)
    {
        string s;
        cin >> s;
        cnt += count(s);
        if (s.front() == 'B' && s.back() == 'A') {
            ++a;
        } else if (s.back() == 'A') {
            ++b;
        } else if (s.front() == 'B') {
            ++c;
        }
    }
    ll add = 0;
    if (b + c == 0) {
        add = max(0ll, a - 1);
    } else {
        add = a + min(b, c);
    }
    cnt += add;

    cout << cnt << endl;
    return 0;
}
