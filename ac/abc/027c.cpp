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

  ll depth = 0;
  for (ll tmp = n; tmp > 0; tmp /= 2) {
    depth++;
  }

  ll tmp = 1;
  ll turn = 0;
  if(depth % 2 == 0) { // 二分木の深さが偶数
    while(tmp <= n) {
      // turn++が偶奇かでtmpの値を変える
      // aokiは二分木の左に行きたいから偶数のときtmp*2(最小化したい)
      // takahashiは二分木の右に行きたいから奇数のときはtmp*2+1(最大化したい)
      tmp = turn++ % 2 == 0 ? tmp * 2: tmp * 2 + 1;
    }
  } else { // 二分木の深さが奇数
    while(tmp <= n) {
      // turn++が偶奇かでtmpの値を変える
      // takahashiは二分木の左に行きたいから奇数のときはtmp*2+1(最小化したい)
      // aokiは二分木の右に行きたいから偶数のときtmp*2(最大化したい)
      tmp = turn++ % 2 == 0 ? tmp * 2 + 1: tmp * 2;
    }
  }
  
  cout << (turn % 2 == 0 ? "Takahashi" : "Aoki") << endl;
  
  return 0;
}
