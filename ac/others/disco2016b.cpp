#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

ll r;
double n, m;

double get_length(int d)
{
    if (d <= 0 || d >= n) {
        return 0;
    } else {
        double t = fabs((2.0 * r / n) * d - r);
        return sqrt(r * r - t * t) * 2;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> r >> n >> m;
    double sum = 0;
    for (int i = 1; i <= n + m - 1; i++) {
        sum += max(get_length(i), get_length(i - m));
    }
    printf("%.9lf\n", sum);

    return 0;
}