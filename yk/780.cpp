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
    if (a < b) {
        puts("YES");
    } else {
        puts("NO");
    }
    cout << abs(a + 1 - b) << endl;
    return 0;
}