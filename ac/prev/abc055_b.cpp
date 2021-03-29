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
    long long int n;
    cin >> n;
    long long int power = 1;
    long long int MAX = 1000000007;
    for (int i = 1; i <= n; i++) {
        power *= i;
        if (power > MAX) {
            power %= MAX;
        }
    }
    cout << power << endl;
	return 0;
}