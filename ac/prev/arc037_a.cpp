#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, sum = 0, m;
    cin >> n;
    rep(i, n) {
        cin >> m;
        sum += max(80 - m, 0);
    }
    cout << sum << endl;
    return 0;
}