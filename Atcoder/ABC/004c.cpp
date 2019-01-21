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

    string s = "123456";
    n %= 30;
    for (int i = 0; i < n; i++) {
        swap(s[i%5], s[i%5+1]);
    }
    cout << s << endl;
	return 0;
}