#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

unsigned int gcd(unsigned int n1, unsigned int n2)
{
    unsigned int tmp;
    while (n2 != 0) {
        tmp = n1;
        n1 = n2;
        n2 = tmp % n2;
    }
    return n1;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x[100000];
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> x[i];
    }
    sort(x, x + n + 1);
    if (n == 1) {
        cout << x[1] - x[0] << endl;
        return 0;
    }
    ll ans = gcd(x[2] - x[1], x[1] - x[0]);
    for (int i = 2; i < n; i++) {
        ans = gcd(x[i + 1] - x[i], ans);
    }
    cout << ans << endl;
    return 0;
}