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
  vector<pair<ll, ll> > a(n);
  rep(i, n) { 
    cin >> a[i].first;
    a[i].second = i+1;
  }
  sort(a.rbegin(), a.rend());
  rep(i, n) {
    cout << a[i].second << endl;
  }
  return 0;
}
