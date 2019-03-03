#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int a[6];
    a[0] = (a1 / b1) * (a2 / b2) * (a3 / b3);
    a[1] = (a1 / b1) * (a3 / b2) * (a2 / b3);
    a[2] = (a2 / b1) * (a1 / b2) * (a3 / b3);
    a[3] = (a2 / b1) * (a3 / b2) * (a1 / b3);
    a[4] = (a3 / b1) * (a1 / b2) * (a2 / b3);
    a[5] = (a3 / b1) * (a2 / b2) * (a1 / b3);
    cout << max(a[0], max(a[1], max(a[2], max(a[3], max(a[4], a[5]))))) << endl;
    return 0;
}