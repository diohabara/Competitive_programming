#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int cnt[26] = {};
    char ch;
    while (cin >> ch) {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
        int num = ch - 'a';
        cnt[num]++;
    }

    REP(i, 26)
    {
        cout << char('a' + i) << " : " << cnt[i] << endl;
    }
    return 0;
}