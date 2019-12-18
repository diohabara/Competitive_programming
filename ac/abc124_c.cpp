#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    ll cnt_01 = 0, cnt_10 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            if (s[i] == '0') {
                cnt_01++;
            } else {
                cnt_10++;
            }
        } else {
            if (s[i] == '0') {
                cnt_10++;
            } else {
                cnt_01++;
            }
        }
    }
    cout << min(cnt_01, cnt_10) << endl;
    return 0;
}