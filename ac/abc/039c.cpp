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
  if (s == "WBWBWWBWBWBWWBWBWWBW") cout << "Do" << endl;
  else if (s == "WBWWBWBWBWWBWBWWBWBW") cout << "Re" << endl;
  else if (s == "WWBWBWBWWBWBWWBWBWBW") cout << "Mi" << endl;
  else if (s == "WBWBWBWWBWBWWBWBWBWW") cout << "Fa" << endl;
  else if (s == "WBWBWWBWBWWBWBWBWWBW") cout << "So" << endl;
  else if (s == "WBWWBWBWWBWBWBWWBWBW") cout << "La" << endl;
  else cout << "Si" << endl;
  return 0;
}
