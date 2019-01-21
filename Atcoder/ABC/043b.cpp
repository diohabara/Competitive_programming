#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    string s;
    string ans = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (ans.size() != 0 && s.at(i) == 'B'){
                ans.pop_back();
        }
        else if (s.at(i) != 'B') {
                ans += s.at(i);
            }
        }
    cout << ans << endl;
	return 0;
}