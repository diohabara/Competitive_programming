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
    int n, l[100100], r[100100];
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        sum += (r[i] - l[i] + 1);
    }
    cout << sum << endl;
	return 0;
}