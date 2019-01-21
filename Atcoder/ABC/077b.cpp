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
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    int max = 0;
    for (int i = 0; i <= pow(n, 0.5); i++) {
        if (pow(i, 2) > max) {
            max = pow(i, 2);
        }
    }
    cout << max << endl;
    return 0;
}