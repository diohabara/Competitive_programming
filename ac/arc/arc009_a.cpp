#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a, b;
    int ans = 0;
    cin >> n;
    rep(i, n) {
        cin >> a >> b;
        ans += a * b;
    }
    printf("%d\n", (int)(ans * 1.05));
    return 0;
}