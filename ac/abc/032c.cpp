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
  ll n, k;
  cin >> n >> k;
  vector<ll> s(n);
  rep(i, n) {
    cin >> s[i];
  }
  if (find(s.begin(), s.end(), 0) != s.end()) { // 0があったときはすべての数列が使える
    cout << n << endl;
    return 0;
  } else {
    ll l = 0, r = 0; // 左端と右端のインデックス
    ll ans = 0; // 答え
    ll pro = 1;
    while(r < n) { // 右端が数列の最後に到達するまで進める
      if (pro * s[r] <= k) { // 積がkより大きくなるまで右端を進める
        pro *= s[r];
        r++;
        ans = max(ans, r - l); // 長さが伸びたら更新
      } else if (r == l) { // 右端と左端が同じとき，右端と左端を進める
        r++;
        l++;
      } else { // 左端を進める
        pro /= s[l];
        l++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
