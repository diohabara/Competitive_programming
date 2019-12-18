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
  ll n, l;
  cin >> n >> l;
  ll sum = 0;
  ll min_v = INF;
  vector<ll> val;
  val.resize(n);
  rep(i, n) {
    val[i] = i + l;
  }
  ll pos;
  rep(i, n) {
    sum += val[i];
    if (val[i] < min_v) {
      min_v = abs(val[i]);;
      pos = i;
    }
  }
  cout << sum - val[pos] << endl;
  return 0;
}
