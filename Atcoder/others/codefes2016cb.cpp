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
    int k, t;
    cin >> k >> t;
    int a[110], m = -1;
    rep(i, t) {
        cin >> a[i];
        if (a[i] > m) {
            m = a[i];
        }
    }
    sort(a, a+t);
    cout << max(a[t-1] - 1 - k + a[t-1], 0) << endl;
	return 0;
}