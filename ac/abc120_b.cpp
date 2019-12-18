#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, k;
    cin >> a >> b >> k;
    int cnt[100] = {}, tmp = 0;
    for (int i = 1; i <= 100; i++) {
        if (a % i == 0 && b % i == 0) {
            cnt[tmp] = i;
            tmp++;
        }
    }
    cout << cnt[tmp - k] << endl;
}