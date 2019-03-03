#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int c[100];
    rep(i, m) { cin >> c[i]; }
    rep(i, m) {
        if (n <= a) {
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