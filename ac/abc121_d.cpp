#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
ll xorsum(ll bit)
{
    if (bit % 4 == 0) {
        return bit;
    } else if (bit % 4 == 1) {
        return 1;
    } else if (bit % 4 == 2) {
        return bit + 1;
    } else {
        return 0;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;
    ll fa = xorsum(a - 1), fb = xorsum(b);
    ll res = fa ^ fb;
    cout << res << endl;
    return 0;
}