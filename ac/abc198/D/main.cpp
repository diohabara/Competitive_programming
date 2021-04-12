#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  vector<string> s(3);
  rep(i, 3) { cin >> s[i]; }

  // solve
  unordered_map<char, int> mp;  // mp[character] = coefficient
  set<char> heads;              // head character must not be 0
  rep(i, 3) {
    reverse(s[i].begin(), s[i].end());
    ll co = 1;  // coefficient
    if (i == 2) co = -1;
    for (char c : s[i]) {
      mp[c] += co;
      co *= 10;
    }
    reverse(s[i].begin(), s[i].end());
    heads.insert(s[i][0]);
  }

  if (10 < mp.size()) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }

  vector<int> p(10);
  iota(p.begin(), p.end(), 0);
  do {
    int i = 0;
    ll total = 0;
    for (auto x : mp) {
      char c = x.first;
      ll co = x.second;
      if (p[i] == 0 && heads.count(c)) total = LLINF;  // This is not the answer
      total += co * p[i];
      ++i;
    }
    if (total == 0) {
      i = 0;
      for (auto& x : mp) {
        x.second = p[i];
        ++i;
      }
      // print correct numbers
      rep(i, 3) {
        ll x = 0;
        for (char c : s[i]) {
          x = x * 10 + mp[c];
        }
        cout << x << endl;
      }
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));

  cout << "UNSOLVABLE" << endl;
}
