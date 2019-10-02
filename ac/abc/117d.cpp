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
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) { cin >> A[i]; }
    // X <= K であるとは
    // XとKのbitで初めて一致しなかった桁をdとすると
    // dより上位の桁についてはXとKと一致
    // d桁目についてはXは0でKは1
    // dより下位の桁についてはXは何でも良い
    ll cur = 1;
    while ((cur << 1) <= K) { // Kまでcurを左シフトする
        cur <<= 1;
    }
    ll x = 0;
    while (cur > 0) { // A[i]のビットを一つずつ調べる
        int zero = 0, one = 0; // 0と1の数を数える
        for (int i = 0; i < N; ++i) { // A[i]のビットを調べる
            if ((cur & A[i]) == 0) {
                ++zero;
            } else {
                ++one;
            }
        }
        if (zero > one) {
            if (x + cur <= K) {
                x += cur;
            }
        }
        cur >>= 1;
    }
    ll ret = 0;
    for (int i = 0; i < N; i++) {
        ret += (x ^ A[i]);
    }

    std::cout << ret << endl;
    return 0;
}