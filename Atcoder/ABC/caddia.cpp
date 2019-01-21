#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        if ((n%10) == 2) {
            cnt++;
        }
        n /= 10;
    }
    cout << cnt << endl;
	return 0;
}