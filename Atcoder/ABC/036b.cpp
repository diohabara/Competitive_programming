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

    int n;
    char s[60][60];
    cin >> n;
    // 二次元配列としてsにn*nの行列を格納(x, y) = (i, j)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }

    /*
    列を固定して
    行の下の要素から上の要素へ
    [1, 2]  -> [3, 1]
    [3, 4]  -> [4, 2]
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << s[n - j - 1][i];
        }
        cout << endl;
    }
	return 0;
}