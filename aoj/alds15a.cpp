#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int n, q;
int A[20];
int m[200];

bool solve(int i, int m)
{
    if (m == 0) {
        return true;
    }
    if (i >= n) {
        return false;
    }
    return solve(i + 1, m) || solve(i + 1, m - A[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    rep(i, n) { cin >> A[i]; }
    cin >> q;
    rep(i, q) { cin >> m[i]; }
    rep(i, q)
    {
        if (solve(0, m[i])) {
            puts("yes");
        } else {
            puts("no");
        }
    }
    // {
    //     bool flag = false;
    //     for (int bit = 0; bit < (1 << n); ++bit) {
    //         int sum = 0;
    //         for (int j = 0; j < n; ++j) {
    //             if (bit & (1 << j)) {
    //                 sum += A[j];
    //             }
    //         }
    //         if (m[i] == sum) {
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if (flag) {
    //         puts("yes");
    //     } else {
    //         puts("no");
    //     }
    // }
    return 0;
}