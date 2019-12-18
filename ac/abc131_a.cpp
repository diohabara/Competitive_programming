#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  rep(i, 3) {
    if (s[i] == s[i+1]){
      puts("Bad");
      return 0;
    }
  }
  puts("Good");
  return 0;
}
