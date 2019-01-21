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
    int n;
    cin >> n;
    int a[10010];
    ll int min_a = 1000000001;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_a) {
            min_a = a[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt  += (a[i] - min_a);
    }
    cnt %= 4;
    if (cnt == 1 || cnt == 2) {
        cout << "first" << endl;
        return 0;
    } else {
        cout << "second" << endl;
        return 0;
    }
	return 0;
}