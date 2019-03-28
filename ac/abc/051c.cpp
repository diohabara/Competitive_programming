#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    int x = tx - sx, y = ty - sy;
    rep(i, y)
    {
        cout << "U";
    }
    rep(i, x)
    {
        cout << "R";
    }
    rep(i, y)
    {
        cout << "D";
    }
    rep(i, x)
    {
        cout << "L";
    }

    cout << "L";
    rep(i, y + 1)
    {
        cout << "U";
    }
    rep(i, x + 1)
    {
        cout << "R";
    }
    cout << "D";

    cout << "R";
    rep(i, y + 1)
    {
        cout << "D";
    }
    rep(i, x + 1)
    {
        cout << "L";
    }
    puts("U");
    return 0;
}