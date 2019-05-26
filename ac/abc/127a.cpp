#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (a >= 13) {
        cout << b << endl;
    } else if (6 <= a && a <= 12) {
        cout << b / 2 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}