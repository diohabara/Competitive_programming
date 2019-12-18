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
    int n, m;
    cin >> n >> m;
    if (m % 2 == 0) {
        for (int i = 0; i <= n; i++) {
            if (m == 2*i + 4*(n-i)){
                cout << i << ' ' << 0 << ' ' << n-i << endl;
                return 0;
            }
        }
    }
    else {
        m -= 3;
        for (int i = 0; i < n; i++) {
            if (m == 2*i + 4*(n-i-1)) {
                cout << i << ' ' << 1 << ' ' << n-i-1 << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
	return 0;
}