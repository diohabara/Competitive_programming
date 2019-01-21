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
    int n, m, a, b;
    int l[100], r[100];
    cin >> n >> m >> a >> b;
    int min = 100, max = 0;
    int array[100] = {};
    rep(i, m) { // ここでl以上r以下の房をプラスとする
        cin >> l[i] >> r[i];
        rep(j, n) {
            if (l[i] - 1 <= j && j <= r[i] - 1) {
                array[j]++;
            }
        }
    }

    int ans = 0;
    rep(i, n) {
        if (array[i] > 0) {
            ans += a;
        } else {
            ans += b;
        }
    }
    cout << ans << endl;
	return 0;
}