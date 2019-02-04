#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int y;
    cin >> y;
    if (y % 100 == 0 && y % 400 != 0) {
        puts("NO");
    } else if (y % 4 == 0) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}