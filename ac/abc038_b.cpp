#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int h1, h2, w1, w2;
    cin >> h1 >> w1;
    cin >> h2 >> w2;

    if ((h1 == h2) || (w1 == w2)){
        cout << "YES" << endl;
        return 0;
    } else if ((h1 == w2) || (w1 == h2)) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
	return 0;
}