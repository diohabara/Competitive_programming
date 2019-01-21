#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
     int n;
     cin >> n;
     string s;
     cin >> s;
     int cnt[4] = {0, 0, 0, 0};
          rep(i, n) {
          if (s[i] == '1') cnt[0]++;
          if (s[i] == '2') cnt[1]++;
          if (s[i] == '3') cnt[2]++;
          if (s[i] == '4') cnt[3]++;
          }
     int max = 0, min = n;
     rep(i, 4) {
          if(cnt[i] > max) {
               max = cnt[i];
          }
          if (cnt[i] < min) {
               min = cnt[i];
          }
     }
     cout << max << ' ' << min << endl;
	return 0;
}
