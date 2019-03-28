#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    // (n-1)^2のbit全探索
    for (int bit = 0; bit < 1 << (n - 1); bit++) {
        // ある種類のbit探索のたびに初期化
        ll sum = 0;
        // char->int
        ll a = s[0] - '0';
        // 文字列を探索する
        for (int i = 0; i < n - 1; i++) {
            // 両辺のbitがともに1のとき，'+'があるとする
            if (bit & (1 << i)) {
                // sumにaを足す．
                sum += a;
                // 今までに足した分は初期化
                a = 0;
            }
            // 直前が'+'のときは次の数字を足す
            // 直前が'+'のときは今までのものを
            // e.g. "110"->1->1*10+1->(1*10+1)*10+0
            a = a * 10 + s[i + 1] - '0';
        }
        // 最後のaの分を足せていないので足す
        sum += a;
        // これまでのsumの分を足す
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}