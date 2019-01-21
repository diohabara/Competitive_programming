#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <functional>
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int const height = 51, width = 51;
    // input
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    char ch[height][width];
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            cin >> ch[y][x];
        }
    }


    int vx[] = {0, 1, 0, -1};
    int vy[] = {0, 1, 0, -1};

    queue <int> yway;
    queue <int> xway;
    
    int start[] = {sy, sx};
    int miny = 10000, minx = 10000;
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            start[0] += vy[y];
            start[1] += vx[x];
            if (ch[start[0]][start[1]] != '#') {
                yway.push(start[0]);
                xway.push(start[1]);
            }
            int ansy = yway.front(), ansx = xway.front();
            if (ansy == gy && ansx == gx) {
                if (miny < ansy || minx < ansx) {
                    yway.pop();
                    xway.pop();
                }
            }
        }
    }
    cout << miny + minx << endl;
	return 0;
}