#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

void rec(int rest, string s)
{
    if (rest == 0) {
        cout << s << endl;
    } else {
        for (char c = 'a'; c <= 'c'; c++) {
            rec(rest - 1, s + c);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    rec(n, s);
    return 0;
}