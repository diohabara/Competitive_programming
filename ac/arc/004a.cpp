#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int x[100], y[100];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double m = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            m = max(m, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
        }
    }
    printf("%lf\n", m);
    return 0;
}