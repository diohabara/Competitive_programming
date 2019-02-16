#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (b % a == 0) {
        cout << a + b << endl;
    } else {
        cout << b - a << endl;
    }
    return 0;
}