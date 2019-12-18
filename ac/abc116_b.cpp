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
    int s;
    cin >> s;
    int a[1000000];
    a[0] = s;
    for (int i = 0; i < 1000000; i++) {
        if (a[i] % 2 == 0) {
            a[i + 1] = a[i] / 2;
        } else {
            a[i + 1] = 3 * a[i] + 1;
        }
        if (a[i] == 4 || a[i] == 2 || a[i] == 1) {
            cout << i + 4 << endl;
            return 0;
        }
    }
	return 0;
}