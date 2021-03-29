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
    ll int n, a[200010], ans[200010];
    cin >> n;
    ans[0] = 0;
    rep(i, n) {
        cin >> a[i];
        ans[i+1] = ans[i] + a[i];
    }
    sort(ans, ans+n+1);

    ll int cnt = 0;  // 求める部分列の数
    // startとans[i]が異なる数になったとき，長さlの部分列があるということだからl(l+1)/2をcntに足す
    // 最後の部分列の分も数える
    ll int start = ans[0], l = 0;
    rep(i, n+1){
        if (ans[i] != start) {
            start = ans[i];
            cnt += l * (l-1) / 2;
            l = 0;
        }
        l++;
        if (i == n) {
            cnt += l * (l-1) / 2;
        }
    }
    cout << cnt << endl;
	return 0;
}