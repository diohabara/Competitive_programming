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
    int n, k;
    cin >> n >> k;
    int r[110];
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    sort(r, r+n);

    double rate = 0;
    for (int i = n-k; i < n; i++) {
        rate = (rate + r[i]) / 2.0;
    }
    printf("%f\n", rate);
	return 0;
}