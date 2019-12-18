#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h, m;
    cin >> h >> m;
    if (m == 0) {
        cout << (18 - h) * 60 << endl;
    } else {
        cout << (18 - h - 1) * 60 + (60 - m) << endl;
    }
    return 0;
}