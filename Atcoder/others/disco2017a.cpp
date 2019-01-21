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
    string s;
    cin >> s;
    if ((s[0] == s[1]) && (s[1] != s[2]) && (s[2] == s[3])) {
        puts("Yes");
    } else {
        puts("No");
    }
	return 0;
}