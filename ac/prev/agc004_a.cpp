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
    ll int a, b, c;
    cin >> a >> b >> c;
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }
    ll int ab, bc, ca;
    ab = a * b;
    bc = b * c;
    ca = c * a;
    ll int ans = ab;
    if (bc < ans) {
        ans = bc;
    }
    if (ca < ans) {
        ans = ca;
    }
    cout << ans << endl;
	return 0;
}