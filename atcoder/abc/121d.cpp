#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int binary(int bit) {
    int ans = 0;
    for (int i = 0; bit > 0; i++) {
        ans = ans + (bit % 2) * pow(10, i);
        bit = bit / 2;
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;
    for (int i = a + 1; i <= b; i++) {
        a = a ^ i;
    }
    cout << a << endl;
    return 0;
}