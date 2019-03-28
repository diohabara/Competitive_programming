#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int a, b, c, d;
    cin >> s >> a >> b >> c >> d;
    s.insert(a, "\"");
    s.insert(b + 1, "\"");
    s.insert(c + 2, "\"");
    s.insert(d + 3, "\"");
    cout << s << endl;
    return 0;
}