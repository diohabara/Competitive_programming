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
  vector<pair<ll, ll> > ba;
  ba.resize(n);
  rep(i, n) {
    ll a, b;
    cin >> a >>b;
    ba[i] = make_pair(b, a);
  }

  sort(ba.begin(), ba.end());

  ll sum = 0;
  rep(i, n) {
    sum += ba[i].second;
    if (ba[i].first < sum) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
