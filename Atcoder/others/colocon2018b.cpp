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
    int n, x;
    ll sum = 0;
    cin >> n >> x;
    string s;
    cin >> s;
    rep(i, n) {
        int t;
        cin >> t;
        if (s[i] == '0') {
            sum += t;
        }
        if (s[i] == '1') {
            if (t < x) {
                sum += t;
            } else {
                sum += x;
            }
        }
    }
    cout << sum << endl;
	return 0;
}