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
const int MAX_N = 510;

bool dp[MAX_N][MAX_N];

signed main() {
  string s;
  cin >> s;

  int ans = 0;
  int n = s.size();
  /**
   * s3=s4を固定して考える
   **/
  for (int i = 2; i < n - 3; i++) {  // s3(=s4)が始まる点(s1+s2の長さはi-1)
    for (int j = 0; i + 2 * j + 1 <= n - 3; j++) {  // s3(=s4)の長さ
      string s3 = s.substr(i, j + 1);          // s[i]~s[i+j]の部分文字列
      string s4 = s.substr(i + j + 1, j + 1);  // s[i+j+1]~s[i+2j+1]の部分文字列
      if (s3 != s4) {
        continue;
      }
      /**
       * s2とs6を比較
       * 文字列s2の長さをkとする
       * s1はs[0]~s[i-k-2]
       * s2はs[i-k-1]~s[i-1]
       * s5はs[i+2j+2]~s[n-k-2]
       * s6はs[n-k-1]~s[n-1]
       **/
      for (int k = 0; k < n; k++) {
        if ((i - k - 1 <= 0) ||  // s2の開始位置(s1は空文字列でない)
            (n - k - 1 <=
             i + 2 * j +
                 2) ||  // s6の開始位置 <= s5の開始位置(s5は空文字でない)
            (s[i - k - 1] !=
             s[n - k - 1]))  // s2の文字とs6の文字が異なる(先頭から見ていく)
          break;
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}