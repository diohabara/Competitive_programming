#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int num[5];
    rep(i, 5) { cin >> num[i]; }
    int rest = 10, min = 0;
    for (int i = 0; i < 5; i++) {
        if (num[i] % 10 < rest && num[i] % 10 != 0) {
            rest = num[i] % 10;
            min = i;
        }
    }
    int ans = 0;
    rep(i, 5) {
        if (i == min) {
            ans += num[min];
        } else if (num[i] % 10 != 0) {
            ans += (num[i] / 10 + 1) * 10;
        } else {
            ans += num[i];
        }
    }
    cout << ans << endl;
    return 0;
}