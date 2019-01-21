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
    int n, k;
    cin >> n >> k;

    int score = 1;
    for (int i = 0; i < n; i++) {
        if (score < k) {
            score *= 2;
        } else {
            score += k;
        }
    }
    cout << score << endl;
	return 0;
}