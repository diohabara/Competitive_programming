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
    int x, y;
    cin >> x >> y;
    if ((x + y) % 4 != 0) {
        puts("No");
        return 0;
    } else {
        int cnt = (x + y) / 4;
        if ((x - cnt) % 2 == 0 && (y - cnt) % 2 == 0 && x - cnt >= 0 && y - cnt >= 0) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
	return 0;
}