#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int l, n;
    cin >> n >> l;
    string s[110], t[110];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s+n);


    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
	return 0;
}