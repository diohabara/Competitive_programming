#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    LL mtr1[100][100], mtr2[100][100], ans[100][100] = {};
    int n, m, l;
    cin >> n >> m >> l;
    REP(i, n) {
        REP(j, m) {
            cin >> mtr1[i][j];
        }
    }
    REP(i, m) {
        REP(j, l) {
            cin >> mtr2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                ans[i][k] += mtr1[i][j] * mtr2[j][k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j) {
                cout << " ";
            }
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}