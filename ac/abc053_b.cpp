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
    
    int fs = 300000, ls = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' && i < fs) {
            fs = i;
        }
        if (s[i] == 'Z') {
            ls = i;
        }
    }
    cout << ls - fs + 1 << endl;
	return 0;
}