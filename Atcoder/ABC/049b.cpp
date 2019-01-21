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
    int h, w;
    cin >> h >> w;
    const int maxhw = 100;
    char c[maxhw][maxhw];
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            cin >> c[y][x];
        }
    }

    for (int ly = 0; ly < h; ly++) {
        for (int lx = 0; lx < w; lx++) {
            cout << c[ly][lx];
        }
        cout << endl;
        for (int lx = 0; lx < w; lx++) {
            cout << c[ly][lx];
        }
        cout << endl;
    }
	return 0;
}