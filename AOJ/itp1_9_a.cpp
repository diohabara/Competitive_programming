#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string w;
    cin >> w;
    string t;
    int cnt = 0;
    while(cin >> t) {
        if (t == "END_OF_TEXT") {
            break;
        }
        REP(i, t.size()) {
            if ('A' <= t[i] && t[i] <= 'Z') {
                t[i] = tolower(t[i]);
            }
        }
        if (w == t) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}