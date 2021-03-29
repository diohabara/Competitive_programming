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

    int length;
    if (s.size() % 2 == 0)
        length = s.size() - 2;
    else
        length = s.size() - 1;

    for (int i = length; i >= 2; i -= 2) {
        int cnt = i / 2;
        for (int j = 0; j < i / 2; j++) {
            if (s[j] == s[i/2 + j]) {
                cnt--;
            }
        }
        if (cnt == 0) {
            cout << i << endl;
            return 0;
        }
    }
	return 0;
}