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
  ll v[10];
  rep(i, 5) {
    cin >> v[i];
  }

  vector<ll> ans;
  rep(i, 5) {
    rep(j, 5) {
      rep(k, 5) {
        if (i == j || i == k || j == k) {
          continue;
        } else {
          ans.push_back(v[i] + v[j] + v[k]);
        }
      }
    }
  }

  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  cout << ans[ans.size() - 3] << endl;
  
  return 0;
}
