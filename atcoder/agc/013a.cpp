#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    ll a[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool inc = false, dec = false;
    if (a[1] - a[0] > 0) {
        inc = true;
    }
    if (a[1] - a[0] < 0){
        dec = true;
    }
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            inc = true;
        }
        if (a[i] < a[i - 1]) {
            dec = true;
        }
        if (inc && dec) {
            cnt++;
            inc = false;
            dec = false;
        }
    }
    cout << cnt << endl;
    return 0;
}