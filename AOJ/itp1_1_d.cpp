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
    int s;
    cin >> s;
    int h = s / 3600, m = (s%3600) / 60;
    s %= 60;
    cout << h <<':' << m << ':' << s << endl;
	return 0;
}