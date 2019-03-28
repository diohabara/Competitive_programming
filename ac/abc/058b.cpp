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
    string o, e;
    cin >> o >> e;
    int lo = o.size(), le = e.size(), length;
    for (int i = 0; i < le; i++) {
        cout << o[i] << e[i];
    }
    if (lo > le) {
        cout << o[lo - 1] << endl;
    } else {
        cout << endl;
    }
    return 0;
}