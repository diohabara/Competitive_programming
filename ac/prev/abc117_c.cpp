#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    int n, m;
    cin >> n >> m;
    int x[100000];
    for (int i = 0; i < m; i++) {
        cin >> x[i];
    }

    // xの値の差を取る
    sort(x, x + m);
    int dif[100000];
    for (int i = 0; i < m - 1; i++) {
        dif[i] = x[i + 1] - x[i];
    }

    // 差の小さいものから足す
    sort(dif, dif + m - 1);
    int sum = 0;
    for (int i = 0; i < m - n; i++) {
        sum += dif[i];
    }
    cout << sum << endl;
    return 0;
}