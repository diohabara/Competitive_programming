#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int minv = a[0];
    int cnt = 0;
    while (cnt != n - 1) {
        for (int i = 1 + cnt; i < n; i++) {
            if (a[i] % minv == 0) {
                cnt++;
                a[i] = 0;
            } else {
                int tmp = a[i];
                a[i] %= minv;
                minv = min(tmp % minv, minv);
            }
        }
        sort(a, a + n);
    }
    cout << minv << endl;
    return 0;
}