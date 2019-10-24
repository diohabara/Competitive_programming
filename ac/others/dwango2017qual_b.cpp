#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << LLONG_MAX;
const ll MOD = 1e9 + 7;

ll cnt(string& s)
{
    ll ret = 0, len = s.size(), i = 0;
    while (i < len) {
        ll tmp = 0;
        while (s[i - 1] == '2' && s[i] == '5') {
            tmp += 2;
            ret = max(ret, tmp);
            i += 2;
        }
        i++;
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string T;
    cin >> T;
    string T1, T2;
    // T1は奇数個目の?を2, 偶数個目の?を5に変換する
    // T2は奇数個目の?を5, 偶数個目の?を2に変換する
    T1 = T2 = T;
    ll len = T.size();
    for (int i = 0; i < len; ++i) {
        if (i % 2 == 0) {
            if (T1[i] == '?') {
                T1[i] = '2';
            }
            if (T2[i] == '?') {
                T2[i] = '5';
            }
        } else {
            if (T1[i] == '?') {
                T1[i] = '5';
            }
            if (T2[i] == '?') {
                T2[i] = '2';
            }
        }
    }
    ll ans1 = cnt(T1), ans2 = cnt(T2);
    cout << max(ans1, ans2) << endl;
    return 0;
}