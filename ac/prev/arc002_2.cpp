#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isUruu(int y)
{
    return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int getDays(int y, int m)
{
    int res = days[m - 1];
    if (isUruu(y) && m == 2) {
        res++;
    }
    return res;
}

signed main()
{
    int y, m, d;
    char ch;
    cin >> y >> ch >> m >> ch >> d;
    for (int i = d; i <= getDays(y, m); i++) {
        if (y % (m * i) == 0) {
            printf("%04d/%02d/%02d\n", y, m, i);
            return 0;
        }
    }

    for (int i = m + 1; i <= 12; i++) {
        for (int j = 1; j <= getDays(y, i); j++) {
            if (y % (i * j) == 0) {
                printf("%04d/%02d/%02d\n", y, i, j);
                return 0;
            }
        }
    }

    for (int i = y + 1;; i++) {
        for (int j = 1; j <= 12; j++) {
            for (int k = 1; k <= getDays(i, j); k++) {
                if (i % (j * k) == 0) {
                    printf("%04d/%02d/%02d\n", i, j, k);
                    return 0;
                }
            }
        }
    }

    return 0;
}