#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    // 入力 H = N[0], W = N[1]
    ll N[2], K;
    cin >> N[0] >> N[1] >> K;

    // num[0]: x 軸方向に見て各座標に何個のコマがあるか、num[1] は y 軸方向
    vector<ll> num[2];
    num[0].assign(N[0], N[1]);
    num[1].assign(N[1], N[0]);
    for (int k = 0; k < K; ++k) {
        int r, c;
        cin >> r >> c;
        --r, --c;
        num[0][r]--;
        num[1][c]--;
    }

    // 各軸ごとに
    ll total = 0;
    for (int iter = 0; iter < 2; ++iter) {
        // メディアンを求める
        ll sum = 0;
        // 値が最大に成るような中央値
        ll mid = 0;
        for (mid = 0; mid < N[iter]; ++mid) {
            sum += num[iter][mid];
            // sumがコマの数以上になったら終了
            if (sum >= (N[0] * N[1] - K + 1) / 2) {
                break;
            }
        }

        // 関数値を求める
        ll val = 0;
        for (ll i = 0; i < N[iter]; ++i) {
            val += num[iter][i] * abs(i - mid);
        }
        // 合計する
        total += val;
    }
    cout << total << endl;
}