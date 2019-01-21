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
    int cnt_minus = 0;
    for1(i, a, b+1) {
        if (i == 0) {
            puts("Zero");
            return 0;
        } else if (i < 0) {
            cnt_minus++;
        }
    }
    if (cnt_minus % 2 == 0) {
        puts("Positive");
    } else {
        puts("Negative");
    }
	return 0;
}