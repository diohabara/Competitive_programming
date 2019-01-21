#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;

int max_div(int n) {
    int max_div = 0;
    while(n % 10 == 0) {
        max_div++;
        n /= 10;
    }
    return max_div;
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int p[100];
    rep(i, n) {
        cin >> p[i];
    }

    int ans = 10;
    rep(i, n) {
        if (max_div(p[i]) < ans) {
            ans = max_div(p[i]);
        }
    }
    cout << ans << endl;
	return 0;
}