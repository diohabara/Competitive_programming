#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int mtr[100][100], vec[100], ans[100] = {};
    int n, m;
    cin >> n >> m;
    REP(i, n) {
        REP(j, m) {
            cin >> mtr[i][j];
        }
    }
    REP(i, m) {
        cin >> vec[i];
    }

    REP(i, n) {
        REP(j, m) {
            ans[i] += mtr[i][j] * vec[j];
        }
        cout << ans[i] << endl;
    }
    return 0;
}