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
    int n, m;
    string s[110], t[110];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        int plus = 0, minus = 0;
        for (int j = 0; j < n; j++) {
            if (s[i] == s[j]) plus++;
        }
        for (int j = 0; j < m; j++) {
            if (s[i] == t[j]) minus++;
        }
        if (plus - minus > max) {
            max = plus - minus;
        }
    }

    cout << max << endl;
	return 0;
}