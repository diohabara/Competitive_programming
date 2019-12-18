#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int l, r;
    cin >> l >> r;
    int sl[50] = {}, sr[50] = {};
    rep(i, l) {
        int tmp;
        cin >> tmp;
        sl[tmp]++;
    }
    rep(i, r) {
        int tmp;
        cin >> tmp;
        sr[tmp]++;
    }
    int cnt = 0;
    rep(i, 50) {
        int tmp;
        tmp = min(sl[i], sr[i]);
        cnt += tmp;
    }
    cout << cnt << endl;
    return 0;
}