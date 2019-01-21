#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	string s;
	cin >> s;
	if (a == 0) {
		puts("Yes");
		return 0;
	}
	rep(i, s.size()) {
		if (s[i] == '+') {
			a++;
		} else {
			a--;
		}
		if (a == 0) {
			puts("Yes");
			return 0;
		}
	}
	puts("No");
	return 0;
}