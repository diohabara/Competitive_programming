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
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0, index = 0;
    for (int i = 0; i < n; i++) {
        bool flag = false;
        if (s[i] == 'W') {
            flag = false;
        }
        if (flag == false && s[i] == 'B') {
            flag = true;
            cnt += (i - index);
            index = i;
        } else if (flag == false && i == n-1) {
            cnt += (i - index + 1);
        }
    }
    cout << cnt << endl;
	return 0;
}