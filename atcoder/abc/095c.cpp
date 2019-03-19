#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (c > a + b) {
        cout << a * x + b * y << endl;
    } else {
        if (x < y) {
            cout << 2 * x * c + (y - x) * b << endl;
        } else {
            cout << 2 * y * c + (x - y) * a << endl;
        }
    }
    return 0;
}