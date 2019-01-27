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
    int n, a[100000];
    cin >> n;
    ll sum = 0, max = -1000000, min = 1000000;
    rep(i, n) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}