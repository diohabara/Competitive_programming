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
	int n, a, b, p[100];
	cin >> n >> a >> b;
	int cnt0 = 0, cnt1 = 0, cnt2 = 0;
	rep(i, n) {
		cin >> p[i];
		if (p[i] <= a) {
			cnt0++;
		} else if ((a < p[i]) && (p[i] <= b)) {
			cnt1++;
		} else if (b < p[i]) {
			cnt2++;
		}
	}
	int min = 10000;
	if (min > cnt0) min = cnt0;
	if (min > cnt1) min = cnt1;
	if (min > cnt2) min = cnt2;
	cout << min << endl;
	return 0;
}