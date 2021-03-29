#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll A, B, Q;
    cin >> A >> B >> Q;
    vector<ll> s(A), t(B);
    rep(i, A) { cin >> s[i]; }
    rep(i, B) { cin >> t[i]; }
    s.push_back(INF);
    s.push_back(-INF);
    sort(s.begin(), s.end());
    t.push_back(INF);
    t.push_back(-INF);
    sort(t.begin(), t.end());

    for (int i = 0; i < Q; ++i) {
        ll x;
        cin >> x;
        ll res = INF;
        ll s_itr = upper_bound(s.begin(), s.end(), x) - s.begin(); // xより大きいsの場所
        ll t_itr = upper_bound(t.begin(), t.end(), x) - t.begin(); // xより大きいtの場所
        rep(j, 2)
        {
            rep(k, 2)
            {
                ll s_pos = max(0ll, s_itr - j);
                ll t_pos = max(0ll, t_itr - k);

                ll tmp_a = abs(s[s_pos] - x) + abs(t[t_pos] - s[s_pos]);
                ll tmp_b = abs(t[t_pos] - x) + abs(s[s_pos] - t[t_pos]);
                res = min(res, tmp_a);
                res = min(res, tmp_b);
            }
        }
        cout << res << endl;
    }
    return 0;
}