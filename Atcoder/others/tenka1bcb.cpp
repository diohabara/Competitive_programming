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
    int n, a[100000], b[100000];
    cin >> n;
    int i_max, i_min;
    int a_min = 1000000000, a_max = 0;
    rep(i, n) {
        cin >> a[i] >> b[i];
        if (a[i] < a_min) {
            i_min = i;
            a_min = a[i];
        }
        if (a[i] > a_max) {
            i_max = i;
            a_max = a[i];
        }
    }
    cout << b[i_max] + a[i_max] << endl;
	return 0;
}