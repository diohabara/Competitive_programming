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

const int height = 51, width = 51;

void count_bomb(int i, int j, int h, int w, char s[height][width])
{
    int cnt = 0;
    for (int x = i-1; x <= i+1; x++) {
        for (int y = j-1; y <= j+1; y++) {
            if ((x >= 0 && x < h) && (y >= 0 && y < w)) {
                if (s[x][y] == '#') cnt++;
            }
        }
    }
    cout << cnt;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;

    char s[height][width];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                cout << '#';
            } else {
                count_bomb(i, j, h, w, s);
            }
        }
        cout << endl;
    }
    return 0;
}
