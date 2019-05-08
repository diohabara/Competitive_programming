#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    ll int n, p;
    cin >> n >> p;
    cout << n << p;

    int max_div = 1;
    for (int i = 1; i <= n; i++) {
        ll int tmp = p;
        int cnt_i = 0;
        while (tmp > 0) {
            // cout << "tmp is " << tmp << " & i is " << i << endl;
            if (tmp % i == 0) {
                cnt_i++;
            } else {
                break;
            }
            cout << "max is " << max_div << endl;
            if (cnt_i == n) {
                max_div = i;
                break;
                i *= 2;
            }
            tmp /= i;
        }
    }
    cout << max_div << endl;
	return 0;
}