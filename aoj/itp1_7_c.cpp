#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int table[101][101];
    int r, c;
    cin >> r >> c;
    REP(i, r) {
        REP(j, c) {
            cin >> table[i][j];
        }
    }
    int row[100] = {}, column[100] = {}, s = 0;
    REP(i, r) {
        REP(j, c) {
            row[i] += table[i][j];
            column[j] += table[i][j];
            s += table[i][j];
        }
    }
    REP(i, r + 1) {
        REP(j, c + 1) {
            if (j) {
                cout << " ";
            }
            if (i < r && j < c) {
                cout << table[i][j];
            } else if (i < r && j == c) {
                cout << row[i];
            } else if (i == r && j < c) {
                cout << column[j];
            } else {
                cout << s;
            }
        }
        cout << endl;
    }
    return 0;
}