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
    ll n;
    cin >> n;
    // cnt[num][oe] : numがいくつあるか，oeは偶数奇数番目の要素かどうか
    ll cnt[100001][2] = {};
    rep(i, n)
    {
        ll v;
        cin >> v;
        cnt[v][i % 2]++;
    }
    // res[oe][fs] : 奇数か偶数かどうか，一番大きい数，２番目に大きい数
    ll res[2][2] = {};
    rep(i, 2)
    {
        // 全探索
        for (ll j = 1; j <= 100000; j++) {
            // 1番大きい数を更新している
            if (cnt[j][i] > cnt[res[i][0]][i]) {
                res[i][1] = res[i][0];
                res[i][0] = j;
            }
            // ２番目に大きい数を更新している
            else if (cnt[j][i] > cnt[res[i][1]][i]) {
                res[i][1] = j;
            }
        }
    }
    // 一番大きい数が奇数と偶数で違うときは奇数，偶数ごとにそれぞれの一番大きい数にする
    if (res[0][0] != res[1][0]) {
        cout << n - cnt[res[0][0]][0] - cnt[res[1][0]][1] << endl;
    } else {
        // それ以外のときはどちらかを１番多いものに変え，もう一方を２番目に多いものに帰る
        cout << n - max(cnt[res[0][0]][0] + cnt[res[1][1]][1], cnt[res[0][1]][0] + cnt[res[1][0]][1]) << endl;
    }
    return 0;
}