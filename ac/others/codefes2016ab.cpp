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
    int n, a[100000];
    cin >> n;
    rep(i, n) {
        cin >> a[i];
    }

    int cnt = 0;
    rep(i, n) {
        if (i == a[a[i] - 1] - 1) cnt++;
    }
    cout << cnt / 2 << endl;
	return 0;
}