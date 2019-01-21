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
    ll int n, a, b;
    cin >> n >> a >> b;
    if (a > b) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        if (a != b) {
            cout << 0 << endl;
            return 0;
        } else {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << (n - 2) * (b - a) + 1 << endl;
}