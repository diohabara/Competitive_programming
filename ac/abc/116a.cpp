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
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << b * c / 2 << endl;
    } else if (b > a && b > c) {
        cout << a * c / 2 << endl;
    } else {
        cout << a * b / 2 << endl;
    }
	return 0;
}