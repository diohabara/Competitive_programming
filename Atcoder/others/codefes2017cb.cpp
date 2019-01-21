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
    int n, a[100];
    cin >> n;
    rep(i, n) {
        cin >> a[i];
    }

    int cnt_odd = 1;
    rep(i, n) {
        if(a[i] % 2 == 0) {
            cnt_odd *= 2;
        } else {
            cnt_odd *= 1;
        }
    }
    ll int ans = pow(3, n) - cnt_odd;
    cout << ans << endl;
	return 0;
}