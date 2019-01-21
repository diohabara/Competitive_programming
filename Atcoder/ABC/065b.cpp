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
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        z--;
        v.push_back(z);
    }
    int now = 0, c = 0;
    for (;;)
    {
        if (now == 1) {
            cout << c << endl;
            break;
        }
        if (c >= n) {
            cout << -1 << endl;
            break;
        }
        c++;
        now = v[now];
    }
    return 0;
}