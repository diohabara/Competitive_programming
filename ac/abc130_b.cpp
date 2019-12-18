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
  int n, x;
  cin >> n >> x;
  vector<ll> l(n);
  rep(i, n) {cin >> l[i];}
  int d = 0;
  int cnt = 1;
  rep(i, n) {
    d += l[i];
    if (d <= x) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
