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
    int ans = min((n / 10) * 100 + (n - (n / 10) * 10) * 15, min(n * 15, (n / 10 + 1) * 100));
    cout << ans << endl;
    return 0;
}