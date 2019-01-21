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
    int n;
    cin >> n;
    if (n % 10 == 0) {
        cout << 10 << endl;
    } else {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
	return 0;
}