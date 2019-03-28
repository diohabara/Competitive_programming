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
    int n, a[100];
    cin >> n;
    rep(i, n) {
        cin >> a[i];
    }

    int sum = 0, seq = 1, start = a[0];
    for(int i = 1; i < n; i++) {
        if (start != a[i]) {
            sum += seq / 2;
            start = a[i];
            seq = 0;
        }
        seq++;
        if (i == n - 1) {
            sum += seq / 2;
        }
    }
    cout << sum << endl;
	return 0;
}