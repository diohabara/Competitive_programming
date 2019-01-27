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
    while(true) {
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }
        rep(i, h) {
            rep(j, w) {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}