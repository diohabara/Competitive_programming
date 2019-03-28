#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

// gcd by loop
int gcd(int x, int y) {
    int r;
    if (x < y) swap(x, y);  // y < xを保障する

    while (y > 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}