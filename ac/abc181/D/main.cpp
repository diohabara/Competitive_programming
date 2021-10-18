#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  string S;
  cin >> S;

  // solve
  if (S.size() == 1 && S == "8") {
    cout << YES << endl;
    return 0;
  } else if (S.size() == 2) {
    if (stoi(S) % 8 == 0) {
      cout << YES << endl;
      return 0;
    }
    swap(S[0], S[1]);
    if (stoi(S) % 8 == 0) {
      cout << YES << endl;
      return 0;
    }
  }
  vector<int> cnt(10);               // cnt[i] := cnt of i
  for (auto& c : S) cnt[c - '0']++;  // count the characters of S
  for (int multi = 104; multi < 1000; multi += 8) {
    auto _cnt = cnt;
    for (auto& c : to_string(multi)) {
      // decrement the count of characters of multiples of 8
      _cnt[c - '0']--;
    }
    // all character count must be greater or equal to 0
    if (all_of(_cnt.begin(), _cnt.end(), [](int x) { return x >= 0; })) {
      cout << YES << endl;
      return 0;
    }
  }
  cout << NO << endl;
}
