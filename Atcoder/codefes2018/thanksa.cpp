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
    int t, a, b, c, d;
    cin >> t >> a >> b >> c >> d;
    int sum = 0;
    if (a + c <= t){
        sum += b + d;
    } else if (c <= t && t < a + c) {
        sum += d;
    } else if (a <= t && t < a + c) {
        sum += b;
    }
    cout << sum << endl;
	return 0;
}