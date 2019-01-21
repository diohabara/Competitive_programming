#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;

int floor(int n)
{
    return (pow(n, 2) + 4) / 8;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    cout << floor(floor(floor(20))) << endl;
	return 0;
}