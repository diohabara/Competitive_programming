#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    double a, b, c;
    cin >> a >> b >> c;
    c = c * acos(-1) / 180;
    double s = 0.5 * a * b * sin(c);
    double l = a + b + sqrt(a * a + b * b - 2 * a * b * cos(c));
    double h = 2 * s / a;
    printf("%lf\n%lf\n%lf\n", s, l, h);
    return 0;
}