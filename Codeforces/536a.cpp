#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    char g[510][510];
    REP(i, n)
    {
        REP(j, n)
        {
            cin >> g[i][j];
        }
    }

    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (g[i][j] == 'X' && g[i - 1][j - 1] == 'X' && g[i - 1][j + 1] == 'X' && g[i + 1][j - 1] == 'X' && g[i + 1][j + 1] =='X') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}