#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string x;
    while(cin >> x) {
        int x_sum = 0;
        if (x == "0") {
            break;
        }
        REP(i, x.size()) {
            x_sum += (x[i] - '0');
        }
        cout << x_sum << endl;
    }
    return 0;
}