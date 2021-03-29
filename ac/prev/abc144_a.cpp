#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int A, B;
    cin >> A >> B;
    if (1 <= A && A <= 9 && 1 <= B && B <= 9) {
        cout << A * B << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}