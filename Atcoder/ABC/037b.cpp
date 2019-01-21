#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    
    int a[110] = {0};
    int l, r, t;
    for (int i = 0; i < q; i++) {
        cin >>l >> r >> t;
        for (int j = l - 1; j < r; j++) {
            a[j] = t;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
	return 0;
}