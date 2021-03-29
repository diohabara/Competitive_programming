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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < a; i++) {
        if (s[i] >= '0' && s[i] <= '9') sum++;
    }
    if (s[a] == '-') sum++;
    for (int i = a+1; i < a+b+1; i++) {
        if (s[i] >= '0' && s[i] <= '9') sum++;
    }

    if (sum == a+b+1) cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}