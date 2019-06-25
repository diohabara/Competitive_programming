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
  string s;
  cin >> s;
  bool has0 = false;
  ll cnt = 0;
  for (auto c : s) {
    if (c == '+') { // 演算子が0のとき
      if (!has0) { // 0がないとき
        cnt++;
      }
      has0 = false; // +のたびにリセット
    } else if (c == '0') { // 0のとき
      has0 = true;
    }
  }
  if (!has0) cnt++;
  cout << cnt << endl;
  return 0;
}
