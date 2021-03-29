#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    ll res = N;
    for (int i = 0; i <= N; i++) { // 6^iで引いてみる
        ll cnt = 0; // 引いた回数
        ll t = i; // 6のべき乗で引く数
        while (t > 0) {
            cnt += t % 6; // 最初に6で割り切れないときの値を求める
            t /= 6; // べき乗して引いた値を求める
        }
        t = N - i; // 9のべき乗で引く数
        while (t > 0) {
            cnt += t % 9;
            t /= 9;
        }
        res = min(res, cnt); // 最小を求める
    }
    cout << res << endl;
    return 0;
}