#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int Q;
  cin >> Q;
  queue<int> A;
  priority_queue<int, vector<int>, greater<int>> sorted_A;

  // solve
  rep(_, Q) {
    int q;
    cin >> q;
    if (q == 1) {
      int x;
      cin >> x;
      A.push(x);
    } else if (q == 2) {
      // output and delete the first element
      if (!sorted_A.empty()) {
        cout << sorted_A.top() << endl;
        sorted_A.pop();
      } else {
        cout << A.front() << endl;
        A.pop();
      }
    } else {
      // sort the array
      while (!A.empty()) {
        sorted_A.push(A.front());
        A.pop();
      }
    }
  }
}
