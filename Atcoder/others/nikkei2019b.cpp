#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    rep(i, n) {
        if (a[i] == b[i] && a[i] == c[i]) {
            // 何もしない
        } else if (a[i] != b[i] && a[i] != c[i] && b[i] != c[i]) {
            cnt += 2;
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}