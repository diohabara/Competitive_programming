#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    bool card[4][13];
    REP(i, 4)
    {
        REP(j, 13)
        {
            card[i][j] = false;
        }
    }
    cin >> n;
    REP(i, n)
    {
        char ch;
        int num;
        cin >> ch >> num;
        num--;
        if (ch == 'S') {
            card[0][num] = true;
        } else if (ch == 'H') {
            card[1][num] = true;
        } else if (ch == 'C') {
            card[2][num] = true;
        } else /*if (ch == 'D') */{
            card[3][num] = true;
        }
    }

    REP(i, 4)
    {
        REP(j, 13)
        {
            if (card[i][j] == false) {
                if (i == 0) {
                    cout << "S ";
                } else if (i == 1) {
                    cout << "H ";
                } else if (i == 2) {
                    cout << "C ";
                } else {
                    cout << "D ";
                }
                cout << j + 1 << endl;
            }
        }
    }
    return 0;
}