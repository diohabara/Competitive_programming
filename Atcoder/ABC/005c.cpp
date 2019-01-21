#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int t, n, m, a[110], b[110];
    cin >> t >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if (n < m) {
        cout << "no" << endl;
        return 0;
    }

    int cnt = 0, j = 0;
    for (int i = 0; i < m; i++) {
        while(j < n) {
            if (b[i] - a[j] >= 0 && b[i] - a[j] <= t) {
                cnt++;
                j++;
                break;
            }
            j++;
        }
    }
    if (cnt == m) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
	return 0;
}