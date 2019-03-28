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
    int x, k;
    cin >> x >> k;
    int index = (int)pow(10, k);
    ll int y = x / index * index;
    while(true) {
        if (y % (int)pow(10, k) == 0 && y > x) {
            cout << y << endl;
            return 0;
        }
        y += index;
    }
	return 0;
}