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
  int N;
  cin >> N;
  string S;
  cin >> S;

  // solve
  int cnt = 0;
  vector<pair<char, int>> rle;  // run-length of 'o' or 'x'
  rep(i, S.size()) {
    cnt++;
    if (i == (int)S.size() - 1 || S[i] != S[i + 1]) {
      rle.push_back(make_pair(S[i], cnt));
      cnt = 0;
    }
  }
  ll comp_cnt = 0;  // count of sequences that have one kind of character
  rep(i, rle.size()) {
    comp_cnt += 1LL * rle[i].second * (rle[i].second + 1) / 2;
  }
  cout << N * (N + 1) / 2 - comp_cnt << endl;
}