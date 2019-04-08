#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;
const int value[6] = {1, 5, 10, 50, 100, 500};
void pay(int n) {
    int rest = 1000 - n;
    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        ans += (rest / value[i]);
        rest -= rest / value[i] * value[i];
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n, n) {
        pay(n);
    }
    return 0;
}