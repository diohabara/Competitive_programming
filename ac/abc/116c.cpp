#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h[101];
        cin >> n;
    int v = 0, e = 0;
    REP(i, n) {
        cin >> h[i];
        v += h[i];
    }

    REP(i, n - 1) {
        e += min(h[i], h[i + 1]);
    }
    cout << v - e << endl;
    return 0;
}