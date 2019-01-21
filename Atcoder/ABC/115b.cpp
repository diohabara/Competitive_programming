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
    int n, p[20];
    cin >> n;

    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] > max) max = p[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }
    cout << sum - max / 2 << endl;
	return 0;
}