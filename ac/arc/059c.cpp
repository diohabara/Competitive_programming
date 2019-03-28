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
    double n;
    int ave = 0, sum = 0;;
    int a[100];
    cin >> n;
    rep(i, n) {
        cin >> a[i];
        ave += a[i];
    }
    ave = round(ave / n);
    rep(i, n) {
        sum += ((a[i] - ave) * (a[i] - ave));
    }
    cout << sum << endl;
	return 0;
}