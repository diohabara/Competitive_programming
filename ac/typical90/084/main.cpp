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
  ll N;
  cin >> N;
  string S;
  cin >> S;

  // solve
  ll cnt = 0;
  vector<ll> rl;  // run-length of 'o' or 'x'

  // think about complimentary events
  // that is all 'o' or all 'x'
  rep(i, S.size()) {
    cnt++;
    if (i == (int)S.size() - 1 || S[i] != S[i + 1]) {
      rl.push_back(cnt);
      cnt = 0;
    }
  }

  ll comp_cnt = 0;  // count of sequences that have one kind of character
  // d*(d+1)/2 == all combinations with a same char
  for (auto& len : rl) {
    comp_cnt += len * (len + 1LL) / 2LL;
  }
  // N*(N+1)/2 == all possible combinations
  // all comb - one char comb = desired result
  cout << N * (N + 1LL) / 2LL - comp_cnt << endl;
}