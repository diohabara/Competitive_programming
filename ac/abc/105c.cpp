#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    string s;
    while (n != 0) {
        int r = n % 2;
        if (r < 0) {
            r += 2; // rがマイナスにならないように
        }
        n = (n - r) / (-2);
        s += (char)('0' + r);
    }
    reverse(s.begin(), s.end());
    if (s == "") {
        s = "0";
    }
    cout << s << endl;
    return 0;
}