#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int sum  = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
	return 0;
}