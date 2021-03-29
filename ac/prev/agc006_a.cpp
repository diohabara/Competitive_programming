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
    string s, t;
    cin >> s >> t;

    int cnt;
    for (int i = 0; i < n; i++) {
        if (s[i] == t[0])
        cnt = 0;
        int index = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == t[index]) {
                cnt++;
            }
            index++;
        }
        if (cnt == n - i) {
            cout << 2 * n - cnt << endl;
            return 0;
        }
    }
    cout << 2 * n << endl;
	return 0;
}