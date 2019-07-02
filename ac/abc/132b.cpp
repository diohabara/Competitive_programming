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
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) { cin >> p[i];}
  int cnt = 0;
  for (int i = 1; i < n - 1; i++) {
    if ((p[i-1] <= p[i] && p[i] < p[i+1]) ||  (p[i+1] <= p[i] && p[i] < p[i-1])) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
