#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    vector<int> a;
    cin >> n;
    a.resize(n);
    rep(i, n) { cin >> a[i]; }
    sort(a.rbegin(), a.rend());
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}