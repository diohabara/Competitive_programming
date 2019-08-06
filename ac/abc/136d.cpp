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
    // output
    int n = s.size();
    vector<int> ans(n);
    int numL = 0, numR = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'R') {
            ans[i] = 0;
            numR++;
        }
        if (s[i] == 'R' && s[i + 1] == 'L') {
            ans[i] = numR / 2 + 1;
            ans[i + 1] = (numR + 1) / 2 + 1;
            numR = 0;
        }
    }

    for (int i = n - 1; i > 0; i--) {
        if (s[i - 1] == 'L' && s[i] == 'L') {
            ans[i] += 0;
            numL++;
        }
        if (s[i - 1] == 'R' && s[i] == 'L') {
            ans[i - 1] += (numL + 1) / 2;
            ans[i] += numL / 2;
            numL = 0;
        }
    }
    rep(i, n) { printf("%d%c", ans[i], i == n - 1 ? '\n' : ' '); }
    return 0;
}