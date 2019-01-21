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
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++) {
        if (s == 3*x) cnt++;
        for (int y = x+1; y <= k; y++) {
            if (s == 2*x+y or s == x+2*y) cnt+=3;
            else if (s-x-y <= k && s-x-y > y) cnt+=6;
        }
    }
    cout << cnt << endl;
	return 0;
}