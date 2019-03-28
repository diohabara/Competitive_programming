#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int cnt = 0;
    while(cin >> s) {
        if (cnt) cout << " "; cnt++;
        REP(i, s.size()) {
            if ('a' <= s[i] && s[i] <= 'z' ){
                s[i] += ('A' - 'a');
            } else if ('A' <= s[i] && s[i] <= 'Z') {
                s[i] += ('a' - 'A');
            }
        }
        cout << s;
    }
    cout << endl;
    return 0;
}