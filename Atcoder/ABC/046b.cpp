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
    int n, k;
    cin >> n >> k;
    long long int sum = k;
    for (int i = 1; i < n; i++) {
        sum *= k-1;
    }
    cout << sum << endl;
	return 0;
}