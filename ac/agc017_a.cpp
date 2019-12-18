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
    int n, p;
    cin >> n >> p;
    int a[51];
    rep(i, n) {
        cin >> a[i];
        if (a[i] % 2 != 0){
            ll int ans = (ll int)pow(2, n - 1);
            cout << ans << endl;
            return 0;
        }
    }
    if (p == 1) {
        cout << 0 << endl;
    } else {
        ll int ans = (ll int)pow(2, n);
        cout << ans << endl;
    }
	return 0;
}