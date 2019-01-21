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
    string s;
    cin >> s;

    int max = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') tmp++;
        if (s[i] == 'D') tmp--;
        if (tmp > max) max = tmp;
    }
    cout << max << endl;
	return 0;
}