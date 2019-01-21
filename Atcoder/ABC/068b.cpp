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
    int max, index = 0;
    for (int i = 0; i <= n; i++) {
        if (i == pow(2, index)) {
            max = i;
            index++;
        }
    }
    cout << max << endl;
	return 0;
}