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
    string s;
    rep(i, n) {
        int sumodd = 0, sumeven = 0;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i % 2 != 0 && i != s.size() - 1) {
                sumodd += (s[i] - '0');
                // cout << s[i] << endl;
            }
            if (i % 2 == 0) {
                int tmp = 2 * (s[i] - '0');
                if (tmp >= 10) {
                    tmp = (tmp % 10) + (tmp / 10);
                }
                // cout << s[i] << ' ' << tmp << endl;
                sumeven += tmp;
            }
        }
        // cout << sumodd << ' ' << sumeven << endl;
    int ans  = 10 - (sumodd % 10 + sumeven % 10) % 10;
    cout << ans % 10 << endl;
    }
    return 0;
}