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
int N, A, B, C, D;
string S;

bool canReach(int start, int end) {
  for (int i = start; i <= end - 1; i++) {
    if (S[i] == '#' && S[i + 1] == '#') {
      return false;
    }
  }
  return true;
}

signed main() {
  cin >> N >> A >> B >> C >> D >> S;
  S = "#" + S + "#";
  if (!canReach(A, C) || !canReach(B, D)) {
    puts("No");
    return 0;
  }
  if (C > D) {
    bool over = false;
    for (int i = B; i <= D; i++) {
      if (S[i - 1] == '.' && S[i] == '.' && S[i + 1] == '.') {
        over = true;
      }
    }
    if (!over) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}