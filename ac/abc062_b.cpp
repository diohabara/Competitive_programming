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
    char a[110][110];
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < w+2; i++) {
        cout << '#';
    }
    cout << endl;
    for (int i = 0; i < h; i++) {
        cout <<'#';
        for (int j = 0; j < w; j++) {
            cout << a[i][j];
        }
        cout << '#' << endl;
    }
    for (int i = 0; i < w+2; i++) {
        cout << '#';
    }
    cout << endl;
	return 0;
}