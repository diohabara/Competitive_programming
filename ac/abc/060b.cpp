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
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= b; i++) {
        if ((a*i) % b == c) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
	return 0;
}