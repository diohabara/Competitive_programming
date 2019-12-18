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
  ll n, k; cin >> n >> k;
  ll a[123456];
  rep(i, n) { cin >> a[i]; }
  ll l = 0;
  ll r = k;
  ll sum[123456] = {};
  ll total = 0;
  for (int i = 0; i < k; i++) { // 1~k番目の値の合計
    sum[0] += a[i];
  }
  for (int i = 0; i < n-k; i++) {
    sum[i+1] = (sum[i] + -a[l+i] + a[r+i]);
  }
  rep(i, n) {
    total += sum[i];
  }
  cout << total << endl;
  return 0;
}
