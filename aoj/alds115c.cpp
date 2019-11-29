#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int n;
vector<pair<int, int>> vp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vp.resize(n);
    rep(i, n)
    {
        int s, t;
        cin >> s >> t;
        vp.emplace_back(t, s);
    }
    sort(vp.begin(), vp.end());
    int last = 0, cnt = 0;
    for (auto p : vp) {
        if (last < p.second) {
            last = p.first;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}