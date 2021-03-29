#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N, M;

struct UnionFind {
  vector<int> par;

  UnionFind(int n) : par(n, -1) {}
  void init(int n) { par.assign(n, -1); }

  int root(int x) {
    if (par[x] < 0) {
      return x;
    } else {
      return par[x] = root(par[x]);
    }
  }

  bool issame(int x, int y) { return root(x) == root(y); }

  bool merge(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) {
      return false;
    }
    if (par[x] > par[y]) {
      swap(x, y);
    }
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x) { return -par[root(x)]; }
};

signed main() {
  cin >> N >> M;
  UnionFind uf(N + M);
  rep(i, N) {
    int k;
    cin >> k; // i番目の人が話す言語
    rep(j, k) {
      int l;
      cin >> l; // 言語l
      --l;
      uf.merge(M + i, l); // 言語lとi番目の人を繋げる(M+iとすることで言語と被らない)
    }
  }

  bool flag = true;
  rep(i, N - 1) {
    if (!uf.issame(M + i, M + i + 1)) { // 人が同じグループかどうか
      flag = false;
      break;
    }
  }
  if (flag) {
    puts("YES");
  } else {
    puts("NO");
  }
  return 0;
}