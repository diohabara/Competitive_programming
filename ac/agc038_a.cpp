#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << LLONG_MAX;
const ll MOD = 1e9 + 7;
ll H, W, A, B;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H >> W >> A >> B;
    vector<vector<int>> mtr(H, vector<int>(W));

    for (int h = 0; h < H; ++h) {
        string ans;
        if (h < B) {
            for (int i = 0; i < A; ++i) {
                ans += "1";
            }
            for (int i = A; i < W; ++i) {
                ans += "0";
            }
        } else {
            for (int i = 0; i < A; ++i) {
                ans += "0";
            }
            for (int i = A; i < W; ++i) {
                ans += "1";
            }
        }
        cout << ans << endl;
    }
    return 0;
}