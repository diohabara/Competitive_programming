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
    double x[100], y[100], z[100];
    cin >> n;
    REP(i, n) {
        cin >> y[i];
    }
    REP(i, n) {
        cin >> x[i];
    }
    REP(i,n) {
        z[i] = fabs(x[i] - y[i]);
    }
    double l1 = 0, l2 = 0, l3 = 0, linf = 0;
    REP(i, n) {
        l1 += z[i];
        l2 += pow(z[i], 2);
        l3 += pow(z[i], 3);
        if (z[i] > linf) {
            linf = z[i];
        }
    }
    printf("%lf\n%lf\n%lf\n%lf\n", l1, pow(l2, 0.5), pow(l3, 1/3.0), linf);
    return 0;
}