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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (a <= s.size() && s.size() <= b) {
        puts("YES");
    } else {
        puts("NO");
    }
	return 0;
}