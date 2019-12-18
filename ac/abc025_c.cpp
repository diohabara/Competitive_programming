#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
ll a[5][5]; // 盤面の情報
ll b[5][5],  c[5][5]; // 得点の情報

// 盤面を埋め終わったときにchokudaiの得点を返す
ll calc() {
  ll score = 0;
  // b[2][3]についてのchokudaiの点数
  rep(i, 2) {
    rep(j, 3 ){
      if (a[i][j] == a[i+1][j]) {
        score += b[i][j];
      }
    }
  }

  // c[3][2]についてのchokudaiの点数
  rep(i, 3) {
    rep(j, 2) {
      if (a[i][j] == a[i][j+1]) {
        score += c[i][j];
      }
    }
  }
  return score;
}

// 盤面を全通り埋めるDFS
ll dfs(ll turn) {
  if (turn == 9) {
    return calc();
  }
  if (turn % 2 == 0) { // chokudaiの番
    ll max_score = -1;
    rep(i, 3) {
      rep(j, 3) {
        if (a[i][j] != '*') {
          continue;
        }
        a[i][j] = 'o'; // 盤面に'o'を打つ
        max_score = max(max_score, dfs(turn+1));
        a[i][j] = '*'; // 盤面を元に戻す
      }
    }
    return max_score;
  } else { // naokoの番
    ll min_score = 1e8;
    rep(i, 3) {
      rep(j, 3) {
        if (a[i][j] != '*') {
          continue;
        }
        a[i][j] = 'x'; // 盤面に'x'を打つ
        min_score = min(min_score, dfs(turn+1));
        a[i][j] = '*'; // 盤面を元に戻す
      }
    }
    return min_score;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll sum = 0; // 全体の合計
  rep(i, 2) {
    rep(j, 3) {
      cin >> b[i][j];
      sum += b[i][j];
    }
  }
  rep(i, 3) {
    rep(j, 2) {
      cin >> c[i][j];
      sum += c[i][j];
    }
  }

  fill(a[0], a[5], '*');
  
  ll chokudai = dfs(0);
  cout << chokudai << endl;
  cout << sum - chokudai << endl;
  return 0;
}
