#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int member[4][3][10] = {};
    int n;
    cin >> n;
    REP(i, n)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        b--;f--;r--;
        member[b][f][r] += v;
    }
    REP(i, 4)
    {
        REP(j, 3)
        {
            REP(k, 10)
            {
                if (k != 9 || k != 0)
                    cout << " ";
                cout << member[i][j][k];
            }
            cout << endl;
        }
        if (i <= 2) {
            REP(i, 20) {
                cout << "#";
            }
            cout << endl;
        }
    }
    return 0;
}