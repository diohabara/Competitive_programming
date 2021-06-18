#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

int main() {
  // input
  vector<string> S(3);
  rep(i, 3) { cin >> S[i]; }

  // solve
  map<char, ll> num_of_char;
  set<char> heads;
  rep(i, 3) {
    reverse(S[i].begin(), S[i].end());
    int weight = i == 2 ? -1 : 1;
    for (char& c : S[i]) {
      num_of_char[c] += weight;
      weight *= 10;
    }
    reverse(S[i].begin(), S[i].end());
    heads.insert(S[i][0]);
  }
  if (10 < num_of_char.size()) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }

  // vector<char> chars;
  // for (auto& [k, _] : num_of_char) {
  //   chars.push_back(k);
  // }

  vector<int> p(10);
  iota(p.begin(), p.end(), 0);
  do {
    int i = 0;
    ll total = 0;
    for (auto x : num_of_char) {
      if (p[i] == 0 && heads.count(x.first)) {
        total = 1e18;
      }
      total += x.second * p[i];
      ++i;
    }
    // map<char, int> coef_of_char;
    // bool skiped = false;
    // for (int i = 0; i < (int)chars.size(); i++) {
    //   if (p[i] == 0 && heads.count(chars[i])) {
    //     skiped = true;
    //     break;
    //   }
    //   coef_of_char[chars[i]] = p[i];
    // }
    // if (skiped) continue;
    // for (auto& [c, coef] : coef_of_char) {
    //   total += (num_of_char[c] * coef);
    // }
    if (total == 0) {
      i = 0;
      for (auto& x : num_of_char) {
        x.second = p[i];
        ++i;
      }
      rep(i, 3) {
        ll x = 0;
        for (char& c : S[i]) {
          x *= 10;
          x += num_of_char[c];
        }
        cout << x << endl;
      }
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << "UNSOLVABLE" << endl;
}
