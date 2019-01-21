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
    int t, b, u, d, l, r;
    cin >> t >> b >> u >> d >> l >> r;
    int current_num = t, cnt = 0;
    int n, p[1010];
    cin >> n;
    rep(i, n) {
        cin >> p[i];
        cout << current_num << '&' << p[i] << endl;
        if (p[i] == current_num) {
            //do nothing;
        } else if (current_num + p[i] == 7) {
            cnt += 2;
            current_num = p[i];
        } else {
            cnt++;
            current_num = p[i];
        }
    }
    cout << cnt << endl;
	return 0;
}