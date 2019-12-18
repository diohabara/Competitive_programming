#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> G[20]; // buka:添字 -> joshi:値

int dfs(int buka) {
  // 部下がいないなら1を返す
  if (G[buka].empty()) {
    return 1;
  }
  // 最大値と最小値を初期化
  int Min = 1e8, Max = -1;
  // 部下の上司に対して
  for (int joshi : G[buka]) {
    // 部下の給料
    int bukaP = dfs(joshi);
    // 部下の給料の最小値と最大値を比べて，値を更新
    Min = min(Min, bukaP);
    Max = max(Max, bukaP);
  }
  // 求める値
  return Min + Max + 1;
}

int main() {
  cin >> N;
  for (int i = 1; i < N; i++) {
    int b;
    cin >> b;
    b--;
    G[b].push_back(i);
  }

  cout << dfs(0) << endl;

  return 0;
}
