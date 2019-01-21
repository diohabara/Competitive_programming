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
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end()), sort(t.begin(), t.end());


    int ls = s.size(), lt = t.size();
    int length;
    if (ls < lt) {
            length = ls;
    } else {
            length = lt;
    }
    
    
    for (int i = 0; i < length; i++) {
        if (s[i] < t[lt - i - 1]) {
            cout << "Yes" << endl;
            return 0;
        }
        else if (s[i] > t[lt - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    if (ls < lt) cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}