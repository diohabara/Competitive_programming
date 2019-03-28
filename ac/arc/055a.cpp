#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if (n == 0) {
        cout << 8 << endl;
        return 0;
    }
    cout << 1;
    for (int i = 0; i < n - 1; i++) {
        cout << 0;
    }
    cout << 7 << endl;
    return 0;
}