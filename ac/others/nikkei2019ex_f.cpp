#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

void fb(ll n)
{
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << "a";
        }
        if (i % 3 == 0) {
            cout << "b";
        }
        if (i % 4 == 0) {
            cout << "c";
        }
        if (i % 5 == 0) {
            cout << "d";
        }
        if (i % 6 == 0) {
            cout << "e";
        }
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    fb(N);
    return 0;
}