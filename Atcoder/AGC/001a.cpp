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
    int n, l[201];
    cin >> n;
    rep(i, 2 * n) {
        cin >> l[i];
    }
    sort(l, l + 2 * n);
    int sum = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        sum += l[i];
    }
    cout << sum << endl;
	return 0;
}