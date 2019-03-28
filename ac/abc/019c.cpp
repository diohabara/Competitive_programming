#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    // input
    int n;
    cin >> n;
    int a[100000];
    rep(i, n) {
        cin >> a[i];
        while(a[i] % 2 == 0) {  // divide a[i] until it becomes odd
            a[i] /= 2;
        }
    }

    // if a[i_1] is other than aother a[i_2], cnt increment
    sort(a, a+n);
    int cnt = 0;
    rep(i, n) {
        if (n > 0) {
            if (a[i] != a[i - 1]) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
	return 0;
}