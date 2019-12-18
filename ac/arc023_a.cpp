#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int y, m, d;
    cin >> y >> m >> d;
    if (m <= 2) {
        m += 12;
        y--;
    }
    int ans =
        365 * y + y / 4 - y / 100 + y / 400 + 306 * (m + 1) / 10 + d - 429;
    cout << 735369 - ans<< endl;
    return 0;
}