#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int d[7], j[7];
    rep(i, 7) { cin >> d[i]; }
    rep(i, 7) { cin >> j[i]; }
    int sum = 0;
    rep(i, 7) { sum += max(d[i], j[i]); }
    cout << sum << endl;
    return 0;
}