#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m, N;
    cin >> m >> n >> N;
    ll sum = N, rest = 0;
    while ((N + rest) / m * n > 0) {
        int quotient = (N + rest) / m, rmd = (N + rest) % m;
        sum += quotient * n;
        rest = rmd;
        N = quotient * n;
    }
    cout << sum << endl;
}