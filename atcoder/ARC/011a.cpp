#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m, N;
    cin >> n >> m >> N;
    int ans = 0;
    while (N > 0) {
        ans += N;
        N = N / n * m;
    }
    cout << ans << endl;
    return 0;
}