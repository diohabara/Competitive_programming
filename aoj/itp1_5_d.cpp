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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        if (tmp % 3 == 0) {
            cout << " " << tmp;
        } else {
            while(tmp != 0) {
                if (tmp % 10 == 3 ){
                    cout << " " << i;
                    break;
                } else {
                    tmp /= 10;
                }
            }
        }
    }
    cout << endl;
    return 0;
}