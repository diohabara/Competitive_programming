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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int res = 0;
        for (int j = 0; j < (int)s.size() - 4; j++) {
            string sub = s.substr(j, 5);
            if (sub == "tokyo" || sub == "kyoto") {
                res++;
                j += 4;
            }
        }
        cout << res << endl;
    }
    return 0;
}