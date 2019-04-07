#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, trans[5];
    cin >> n;
    rep(i, 5) { cin >> trans[i]; }
    ll num[6] = {n, 0, 0, 0, 0, 0};
    ll cnt = 0;
    while (num[5] != n) {
        for (int i = 4; i >= 0; i--) {
            if (num[i] > 0) {
                ll tmp = num[i];
                num[i] -= tmp > trans[i] ? trans[i] : tmp;
                num[i + 1] += tmp > trans[i] ? trans[i] : tmp;
                if (num[i] < 0) {
                    num[i] = 0;
                }
            }
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}