#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int e[6], b, l[6];
    REP(i, 6) {
        cin >> e[i];
    }
    cin >> b;
    REP(i, 6) {
        cin >> l[i];
    }
    int cnt = 0, b_cnt = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (e[i] == l[j]) {
                cnt++;
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        if (l[i] == b) {
            b_cnt++;
        }
    }
    switch (cnt)
    {
        case 6:
            cout << 1 << endl;
            break;
        case 5:
            if (b_cnt == 1) {
                cout << 2 << endl;
            } else {
                cout << 3 << endl;
            }
            break;
        case 4:
            cout << 4 << endl;
            break;
        case 3:
            cout << 5 << endl;
            break;
        default:
            cout << 0 << endl;
            break;
    }
    return 0;
}