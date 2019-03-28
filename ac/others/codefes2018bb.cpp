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
    int n, x, a[100], b[100], max = -1;
    cin >> n >> x;
    rep(i, n) {
        cin >> a[i] >> b[i];
        if (b[i] > max) {
            max = b[i];
        }
    }

    int sum = 0;
    rep(i, n) {
        sum += a[i] * b[i];
    }
    cout << sum + max * x << endl;
	return 0;
}