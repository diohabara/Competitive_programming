#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

char rot(char ch, int n)
{
    unsigned num = 0;
    if ('a' <= ch && ch <= 'z') {
        num = (ch - 'a' + n) % 26;
        return num + 'a';
    } else {
        num = (ch - 'A' + n) % 26;
        return num + 'A';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = rot(s[i], n);
    }
    cout << s << endl;
    return 0;
}