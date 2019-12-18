#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, a[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = 10000, max = -100;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    cout << max - min << endl;
	return 0;
}