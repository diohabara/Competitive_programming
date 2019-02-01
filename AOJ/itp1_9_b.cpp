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
    while(cin >> s) {
        if (s =="-") {
            break;
        }
        int m;
        cin >> m;
        int n = s.size();
        for (int i = 0; i < m; i++) {
            int h;
            cin >> h;
            s = s.substr(h, n - h) + s.substr(0, h);
        }
        cout << s << endl;
    }
    return 0;
}