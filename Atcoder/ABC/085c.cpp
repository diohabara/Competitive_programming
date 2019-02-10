#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    ll y;
    cin >> n >> y;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (y == 10000 * i + 5000 * j + 1000 * (n - j - i)) {
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1\n";
    return 0;
}