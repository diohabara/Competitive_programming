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
    int cnt[26] = {0};
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (char('a'+i) == s[j]) {
                cnt[i]++;
            }
        }
        if (cnt[i] == 0) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    cout <<"None" << endl;
	return 0;
}