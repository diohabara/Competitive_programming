#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, p[1010];
    string s[1010];
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> p[i];
        total += p[i];
    }

    for (int i = 0; i < n; i++) {
        if (p[i] > (total/2.0)) {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << "atcoder" << endl;
	return 0;
}