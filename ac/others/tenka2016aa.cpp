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
    int sum = 0;
    rep(i, 100) {
        if ((i % 3 != 0) && (i % 5 != 0)) {
            sum += i;
        }
    }
    cout << sum << endl;
	return 0;
}