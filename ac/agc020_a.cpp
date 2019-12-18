#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    int l = abs(b - a);
    if (l % 2 == 0) {
        puts("Alice");
    } else {
        puts("Borys");
    }
    return 0;
}