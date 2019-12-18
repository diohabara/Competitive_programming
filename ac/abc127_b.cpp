#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1,0,-1,0},dx[4] = {0,1,0,-1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll r, d, x;
    cin >> r >> d >> x;
    for (int i = 0; i < 10;i++) {
        x = r * x - d;
        cout << x << endl;
    }
    return 0;
}