#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int L, N, X[1000000];
    ll sum_min = 0, sum_max = 0;

    rep(i, N) { cin >> X[i];
        sum_min += min(X[i], L - X[i]);
        sum_max += max(X[i], L - X[i]);
    }
    printf("ld% %ld\n", sum_min, sum_max);
}
