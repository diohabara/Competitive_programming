#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int digit(LL n)
{
    int idx = 0;
    while (n > 0) {
        idx++;
        n /= 10;
    }
    return idx;
}

int divider(LL n)
{
    LL min_d = 10000000000, max_d = -1;
    int di = 1;
    while (n >= di * di) {
        if (n % di == 0) {
            if (n - n / di < min_d) {
                min_d = di;
                max_d = n / di;
                cout << min_d << " " << max_d << endl;
            }
            n /= di;
        } else {
            di++;
        }
    }
    return max(digit(min_d), digit(max_d));
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    LL n;
    cin >> n;
    int ans = divider(n);
    cout << ans << endl;
    return 0;
}