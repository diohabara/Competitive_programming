#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) { cin >> a[i]; }
  ll ans = 1;
  ll l = 1;
  for (int i = 1; i < n; i++) {
    if (a[i-1] < a[i]) {
      l++;
    } else {
      l = 1;
    }
    ans += l;
  }
  cout << ans << endl;
  return 0;
}
