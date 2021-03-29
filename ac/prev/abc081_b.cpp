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
    int n, a[210];
    cin >> n;

    int cnt[210] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while (a[i] > 0) {
            if (a[i] % 2 == 0) cnt[i]++;
            else break;
            a[i] /= 2;
        }
    }

    int min = 1000000;
    for (int i = 0; i < n; i++) {
        if (cnt[i] < min) {
            min = cnt[i];
        }
    }
    cout << min << endl;

	return 0;
}