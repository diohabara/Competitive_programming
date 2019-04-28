#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) { cin >> a[i]; }
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] + a[i] < 0) {
            a[i + 1] *= -1;
            a[i] *= -1;
        }
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}