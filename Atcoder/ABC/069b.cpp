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
    string s;
    cin >> s;
    int l = s.size() - 2;
    cout << s[0] << l << s[l+1] << endl;
	return 0;
}