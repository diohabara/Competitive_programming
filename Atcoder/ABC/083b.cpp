#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;

int sum_index(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (sum_index(i) >= a && sum_index(i) <= b) {
            sum += i;
        }
    }
    cout << sum << endl;
	return 0;
}