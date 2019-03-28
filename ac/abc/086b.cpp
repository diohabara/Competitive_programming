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

int index(int n)
{
    int index = 0;
    while(n > 0) {
        n /= 10;
        index++;
    }
    return index;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;

    int ab = a * pow(10, index(b)) + b;

    for (int i = 1; i <= 10000; i++) {
        if (ab == i * i) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
	return 0;
}