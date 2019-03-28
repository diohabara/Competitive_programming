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
    int a, b, n;
    cin >> a >> b >> n;
    string x;
    cin >> x;
    rep(i, x.size()) {
        if (x[i] == 'S') {
            if (a > 0) {
                a--;
            }
        }
        if (x[i] == 'C') {
            if (b > 0) {
                b--;
            }
        }
        if (x[i] == 'E') {
            if (a >= b && a != 0) {
                a--;
            } else if (b > a) {
                b--;
            }
        }
    }
    cout << a << endl << b << endl;
	return 0;
}