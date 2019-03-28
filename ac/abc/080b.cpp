#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n; cin >> n;
    int sum = 0, tmp = n;
    while (tmp > 0) {
        sum += tmp % 10;
        tmp /= 10;
    }
    if (n % sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}