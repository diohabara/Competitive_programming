#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    char x;
    string s;
    cin >> x;
    cin >> s;
    REP(i, s.size())
    {s
        if (s[i] != x) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}