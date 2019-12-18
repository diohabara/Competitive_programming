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
    while (true) {
        n -= a;
        if (n <= 0) {
            puts("Ant");
            return 0;
        }
        n -= b;
        if (n <= 0) {
            puts("Bug");
            return 0;
        }
    }
    return 0;
}