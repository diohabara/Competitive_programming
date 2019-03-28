#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define MAX 100
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    int* sqr;
    rep(i, n)
    {
        rep(j, n)
        {
            int left_upper = abs(n - 2 * i) + abs(n - 2 * (j + 1));
            int left_lower = abs(n - 2 * i) + abs(n - 2 * j);
            int right_upper = abs(n - 2 * (i + 1)) + abs(n - 2 * (j + 1));
            int right_lower = abs(n - 2 * (i + 1)) + abs(n - 2 * j);
            if (left_upper <= n && left_lower <= n && right_upper <= n && right_lower <= n) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}