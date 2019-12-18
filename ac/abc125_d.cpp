#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, minus = 0;
    ll mi = 1e9;
    rep(i, n)
    {
        cin >> a[i];
        sum += abs(a[i]);
        if (a[i] < 0) {
            minus++;
        }
        mi = min(mi, abs(a[i]));
    }
    if (minus % 2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum - mi * 2 << endl;
    }
    return 0;
}