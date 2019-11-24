#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    if (S == "SAT") {
        cout << 1 << endl;
    } else if (S == "FRI") {
        cout << 2 << endl;
    } else if (S == "THU") {
        cout << 3 << endl;
    } else if (S == "WED") {
        cout << 4 << endl;
    } else if (S == "TUE") {
        cout << 5 << endl;
    } else if (S == "MON") {
        cout << 6 << endl;
    } else {
        cout << 7 << endl;
    }
    return 0;
}