#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    // input
    int n, k;
    cin >> n >> k;
    int t[5][5];
    rep(i, n) {
        rep(j, k) {
            cin >> t[i][j];
        }
    }

    
	return 0;
}