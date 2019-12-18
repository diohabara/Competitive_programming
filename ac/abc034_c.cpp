#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll calc(ll a, ll b){ 
  if (b == 0) {
    return 1;
  } else if (b % 2 == 0){
    ll d = calc(a, b/2) % MOD;
    return d * d % MOD;
  } else {
    return a * calc(a, b-1) % MOD;
  }
}
int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll w, h;
  cin >> w >> h;
  w--, h--;
  ll ans = 1;
  for (int i = 0; i < min(w, h); i++) {
    ans *= (h+w-i); // h+w~h+1をかける
    ans %= MOD;
    ans *= calc(i+1, MOD-2); // 1~wで割る(/H!)
    ans %= MOD;
  }
  cout << ans % MOD << endl;
  return 0;
}
