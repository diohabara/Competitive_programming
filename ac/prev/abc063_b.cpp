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
    for (int i = 0; i < s.size(); i++) {
        int cnt = 0;
        for (int j = i+1; j < s.size(); j++) {
            if (s[i] == s[j]) cnt++;
        }
        if (cnt > 0) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
	return 0;
}