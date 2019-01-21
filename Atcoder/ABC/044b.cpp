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
    string w;
    cin >> w;
    int alpha_cnt[26] = {0};
    for (int i = 0; i < w.size(); i++) {
        alpha_cnt[w[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha_cnt[i] % 2 == 0) cnt++;
    }
    if (cnt == 26) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
	return 0;
}