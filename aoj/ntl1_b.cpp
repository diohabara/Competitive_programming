#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

typedef unsigned long long ullong;

ullong power(ullong x, ullong n, ullong M) {
    ullong res = 1;
    if (n > 0) {
        res = power(x, n / 2, M);
        if (n % 2 == 0)
            res = (res * res) % M;
        else
            res = (((res * res) % M) * x) % M;
    }
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;

    cout << power(m, n, 1000000007) << endl;

    return 0;
}