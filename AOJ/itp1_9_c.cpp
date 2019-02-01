#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int taro = 0, hanako = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string t, h;
        cin >> t >> h;
        if (t > h) {
            taro += 3;
        } else if (t < h) {
            hanako += 3;
        } else {
            taro++;
            hanako++;
        }
    }
    cout << taro << " " << hanako << endl;
    return 0;
}