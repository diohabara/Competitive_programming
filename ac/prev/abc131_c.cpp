#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
unsigned gcd(unsigned a, unsigned b) {
    while (1) {
        if (a < b) swap(a, b);
        if (!b) break;
        a %= b;
    }
    return a;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans;
  ll e = c * d / gcd(c, d);
  ans = (b-a+1) - (b/c - (a-1)/c) - (b/d - (a-1)/d) + (b/e - (a-1)/e);
  cout << ans << endl;
  return 0;
}
