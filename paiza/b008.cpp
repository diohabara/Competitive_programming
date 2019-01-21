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
    int n, m;
    cin >> n >> m;
    int e[1000][1000], sum = 0;
    rep(i, m) {
        int concert_sum = 0;
        rep(j, n) {
            cin >> e[i][j];
            concert_sum += e[i][j];
        }
        if (concert_sum > 0) {
            sum += concert_sum;
        }
    }
    if (sum > 0) {
        cout << sum << endl;
    } else {
        cout << 0 << endl;
    }
	return 0;
}