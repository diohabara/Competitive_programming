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
    int n, l, r;
    cin >> n >> l >> r;
    int a[100000];
    rep(i, n) {
        cin >> a[i];
    }

    rep(i, n) {
        int ans;
        if (a[i] < l) {
            ans = l;
        } else if (r < a[i]) {
            ans = r;
        } else {
            ans = a[i];
        }
        if (i != n - 1) {
            cout << ans << ' ';
        } else {
            cout << ans << endl;
        }
    }
	return 0;
}