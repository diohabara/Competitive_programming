#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int d, g;
    cin >> d >> g;
    vector<int> p, c;
    p.resize(d), c.resize(d);
    for (int i = 0; i < d; i++) {
        cin >> p[i] >> c[i];
    }
    // 十分大きな数をansとする
    ll ans = 1 << 29;
    for (int bit; bit < (1 << d); bit++) {
        ll sum = 0; // 合計
        ll cnt = 0; // ACした問題の数
        for (int i = 0; i < d; i++) {
            if (bit & (1 << i)) {
                // i番目のボーナス + i番目のの数 * 何番目
                sum += c[i] + p[i] * 100 * (i + 1);
                // i番目までの数
                cnt += p[i];
            }
        }
        if (sum >= g) {
            // もしsumがg以上のときansを更新する
            ans = min(ans, cnt);
        } else {
            // もし超えないときは大きな値から一つずつ足す
            for (int i = d - 1; i >= 0; i--) {
                if (bit & (1 << i)) { // bitがここで立つときは上でもbitが立つからもう加えない
                    continue;
                }
                for (int j = 0; j < p[i]; j++) { // 一つずつ足す
                    if (sum >= g) { // sumがg以上になったらbreak
                        break;
                    }
                    // i番目の問題の点数を足す
                    sum += 100 * (i + 1);
                    cnt++;
                }
            }
            // 更新する
            ans = min(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}