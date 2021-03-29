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

int reverse(int n)
{
    int index = 4, sum = 0;
    while (n > 0) {
        sum += (n % 10) * pow(10, index);
        n /= 10;
        index--;
    }
    return sum;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i == reverse(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
	return 0;
}