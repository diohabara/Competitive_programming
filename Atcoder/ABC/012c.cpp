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
    int n;
    cin >> n;

    int qq = 0;
    rep(i, 9) {
        rep(j, 9) {
            qq += (i + 1) * (j + 1);
        }
    }
    qq -= n;  // qq is a the sum of 99 minus n
    rep(i, 9) {
        rep(j, 9) {
            if ((i + 1) * (j + 1) == qq) {  // if qq is (i + 1) * (j + 1), the (i + 1) and (j + 1) is the answer
                printf("%d x %d\n", i + 1, j + 1);
            }
        }
    }
	return 0;
}