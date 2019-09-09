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
    vector<int> S, T;
    int n, q;
    cin >> n;
    S.resize(n);
    rep(i, n) { cin >> S[i]; }
    cin >> q;
    T.resize(q);
    rep(i, q) { cin >> T[i]; }
    int cnt = 0;
    for (auto t : T) {
        bool hasKey = false;
        for (auto s : S) {
            if (s == t) {
                hasKey = true;
            }
        }
        if (hasKey) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}