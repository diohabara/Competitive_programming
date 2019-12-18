#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if (n % 2 == 0) cout << n - 1 << endl;
    else cout << n + 1 << endl;
	return 0;
}