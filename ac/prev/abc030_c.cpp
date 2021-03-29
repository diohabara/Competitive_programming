#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main () {
  int n, m; cin >> n >> m;
  int x, y; cin >> x >> y;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  int now = 0; // 現在時刻
  int ans = 0; // 往復する時間
  while (now <= a[n - 1]) { // 現在時刻がaの最後の値まで行う
    int lowa = *lower_bound(a.begin(), a.end(), now); // nowよりも小さい値を返す
    if (lowa == 0) { // nowよりも小さい値がないとき
      cout << ans << endl;
      return 0;
    }
    now = lowa + x; // now = aの最小の時間+A->Bの時間
    int lowb = *lower_bound(b.begin(), b.end(), now); // nowよりも小さい値を返す
    if (lowb == 0) { // nowよりも小さい値がないとき
      cout << ans << endl;
      return 0;
    }
    now = lowb + y; // now = bの最小の時間+B->Aの時間
    ans++; 
  }
  cout << ans << endl;
}
