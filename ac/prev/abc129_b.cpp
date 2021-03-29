#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> w(n);
    int sum = 0;
    rep(i, n)
    {
        cin >> w[i];
        sum += w[i];
    }
    int min_v = INF;
    int a_sum = 0;
    rep(i, n)
    {
        a_sum += w[i];
        min_v = min(min_v, abs(sum - 2*a_sum));
    }
    cout << min_v << endl;
    return 0;
}