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
    string s;
    cin >> s;
    int n = s.size();
    int dp_1[200000]; // i文字目が1文字目として分割されるときの分割数の最大値
    int dp_2[200000]; // i文字目がその前の文字と連結されるときの分割数の最大値
    if (s[0] == s[1]) {
        dp_1[0] = dp_1[1] = 1;
        dp_2[0] = 0, dp_2[1] = 1;
    } else {
        dp_1[0] = 1, dp_1[1] = 2;
        dp_2[0] = 0, dp_2[1] = 1;
    }
    for (int i = 2; i < n; i++) {
        if (s[i - 1] == s[i]) {
            dp_1[i] = dp_2[i - 1] + 1;
            dp_2[i] = dp_1[i - 2] + 1;
        } else {
            dp_1[i] = dp_1[i - 1] + 1;
            dp_2[i] = dp_1[i - 2] + 1;
        }
    }
    cout << max(dp_1[n - 1], dp_2[n - 1]) << endl;
    return 0;
}