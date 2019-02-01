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
    cin >> s;
    int n;
    cin >> n;
    string order;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == "print") {
            int a, b;
            cin >> a >> b;
            for (int i = a; i <= b; i++) {
                cout << s[i];
            }
            cout << endl;
        } else if(order == "reverse") {
            int a, b;
            cin >> a >> b;
            string tmp;
            for (int i = b; i >= a; i--) {
                tmp += s[i];
            }
            s.replace(a, b - a + 1, tmp);
        } else {
            int a, b;
            string p;
            cin >> a >> b >> p;
            s.replace(a, b - a + 1, p);
        }
    }
    return 0;
}