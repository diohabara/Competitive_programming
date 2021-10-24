#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int M;
  cin >> M;
  vector<vector<int>> graph(10);
  int u, v;
  rep(i, M) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  int p;
  string s = "999999999";
  for (int i = 1; i <= 8; i++) {
    cin >> p;
    s[p - 1] = i + '0';
  }

  // solve
  queue<string> Q;
  Q.push(s);
  map<string, int> mp;
  mp[s] = 0;
  while (Q.size()) {
    string s = Q.front();
    Q.pop();
    for (int i = 1; i <= 9; i++)
      if (s[i - 1] == '9') v = i;

    for (auto& u : graph[v]) {
      string t = s;
      swap(t[u - 1], t[v - 1]);
      if (mp.count(t)) continue;
      mp[t] = mp[s] + 1;
      Q.push(t);
    }
  }
  if (mp.count("123456789") == 0)
    cout << -1 << endl;
  else
    cout << mp["123456789"] << endl;
}
