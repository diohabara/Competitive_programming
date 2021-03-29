#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    ll a[100000], b[100000];
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        // cntはこれまでに加えた値の総数
        // b[i] - (a[i] + cnt)%b[i]
        // b - (a + これまでに加えた総数) modulo b
        // これは後いくらでbになるかという値
        // これを更にbで割ることで1のときにmodule 1で答えが1になることを阻止する
        cnt += (b[i] - (a[i] + cnt) % b[i]) % b[i];
    }
    cout << cnt << endl;
    return 0;
}