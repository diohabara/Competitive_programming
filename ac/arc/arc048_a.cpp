#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;
    if (a < 0 &&  b > 0 ){
        cout << b - a - 1 << endl;
    } else {
        cout << b - a << endl;
    }
    return 0;
}