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
    a = abs(a);
    b = abs(b);
    if (a < b) {
        puts("Ant");
    } else if (a > b) {
        puts("Bug");
    } else {
        puts("Draw");
    }
    return 0;
}