#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    double ans = 0;
    cin >> n;
    double x[10];
    string u[10];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> u[i];
    }
    for (int i = 0; i < n; i++) {
        if (u[i] == "JPY") {
            ans += x[i];
        } else {
            ans += x[i] * 380000.0;
        }
    }
    printf("%lf\n", ans);
    return 0;
}