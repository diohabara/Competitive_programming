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
    int a[3][100000];
    cin >> n;
    rep(i, n)
    {
        cin >> a[0][i] >> b[1][i];
        c[2][i] = a[0][i] - b[1][i];
    }
    int ans = 0;
    if (n % 2 == 0) {
        sort(c[2], c[2] + n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans += c[i];
            } else {
                ans -= c[i];
            }
        }
    } else {

    }
    return 0;
}