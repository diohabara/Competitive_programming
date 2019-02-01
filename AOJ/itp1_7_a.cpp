#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) {
            return 0;
        }
        int sum = m + f;
        if (m == -1 || f == -1) {
            cout << "F" << endl;
        } else if (sum >= 80) {
            cout << "A" << endl;
        } else if (65 <= sum && sum < 80) {
            cout << "B" << endl;
        } else if (50 <= sum && sum < 65) {
            cout << "C" << endl;
        } else if (30 <= sum && sum < 50) {
            if (r >= 50) {
                cout << "C" << endl;
            } else {
                cout << "D" << endl;
            }
        } else {
            cout << "F" << endl;
        }
    }
    return 0;
}