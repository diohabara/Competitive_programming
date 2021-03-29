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
  ll n, q;
  cin >> n >> q;
  vector<ll> rev(n+1);
  fill(rev.begin(), rev.end(), 0);
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    l--;
    rev[l]++;
    rev[r]--;
  }
  rep(i, n) {
    rev[i+1] += rev[i];
  }

  rep(i, n) {
    if (rev[i] % 2 == 0) {
      cout << "0";
    } else {
      cout << "1";
    }
  }
  cout << endl;
  return 0;
}
