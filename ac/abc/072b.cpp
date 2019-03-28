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
    int length = s.size();
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0){
            cout << s[i];
        }
    }
    cout << endl;
	return 0;
}