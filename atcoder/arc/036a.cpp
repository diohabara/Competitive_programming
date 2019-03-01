#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int t[100000];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    for (int i = 2; i < n; i++) {
        if (t[i] + t[i - 1] + t[i - 2] < k) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}