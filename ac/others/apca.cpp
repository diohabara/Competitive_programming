#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
  int x, y;
  cin >> x >> y;
  if (x % y == 0) {
    cout << -1 << endl;
  } else {
    cout << x << endl;
  }
  return 0;
}
