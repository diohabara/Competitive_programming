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
    // input
    string s;
    cin >> s;
    int n = s.size();
    // output
    int ans = 0;
    int cntG = 0, cntP = 0;
    rep(i, n)
    {
        if (s[i] == 'g') {
            if (cntP < cntG) {
                cntP++, ans++;
            } else {
                cntG++;
            }
        } else {
            if (cntP < cntG) {
                cntP++;
            } else {
                cntG++, ans--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}