#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m, a, b, c[100];
    cin >> n >> m >> a >> b;
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        if (n <= a && n + b >= a) {
            n += b;
        }
        n -= c[i];
        if (n < 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    puts("complete");
    return 0;
}