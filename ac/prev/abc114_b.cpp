#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    string s; cin >> s;
    
    int min = 10000;
    for (int i = 0; i < s.size() - 2; i++) {
        int tmp = 0, index = 100;
        for (int j = 0; j < 3; j++) {
            tmp += index * (s[i+j] - '0');
            index /= 10;
        }
        if (abs(tmp - 753) < min) {
            min = abs(tmp - 753);
        }
    }
    cout << min << endl;
	return 0;
}