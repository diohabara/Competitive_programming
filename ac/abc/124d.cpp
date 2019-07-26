#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
ll dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // 1の個数と0の個数を交互に記録していく
    // 先頭と最後尾が0のときにも記録する
    vector<ll> num;
    if (s[0] == '0') {
        num.push_back(0);
    }
    for (ll i = 0; i < (ll)s.size();) {
        ll j = i;
        while (j < (ll)s.size() && s[j] == s[i]) {
            ++j;
        }
        num.push_back(j - i);
        i = j;
    }
    if (s.back() == '0') {
        num.push_back(0);
    }

    // 累積和を記録する
    vector<ll> sums((ll)num.size() + 1, 0);
    for (ll i = 0; i < (ll)num.size(); ++i) {
        sums[i + 1] = sums[i] + num[i];
    }

    ll ans = 0;
    // 偶数番目の添字から始まる,長さ2k+1以下の区間の総和のうち,最大値を求める
    for (ll left = 0; left < (ll)sums.size(); left += 2) {
        ll right = left + k * 2 + 1;
        if (right >= (ll)sums.size()) {
            right = (ll)sums.size() - 1;
        }
        ans = max(ans, sums[right] - sums[left]);
    }
    cout << ans << endl;
    return 0;
}