#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;
    cout << (n - 1) / min({ a, b, c, d, e }) + 5 << endl;
    return 0;
}