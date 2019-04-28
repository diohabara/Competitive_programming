#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<int, int> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;

    int lb = 0, rw = 0;
    for (int i = 0; i < n; i++) {
        // 左の黒石の数を数える
        if (s[i] == '#') {
            lb++;
            // 右の白石 & 左の黒石が1以上のとき
            // 左の黒石-- 右の白石++
            // 左の黒石を白に，右の白石を黒にする
        } else if (s[i] == '.' && lb > 0) {
            lb--;
            rw++;
        }
    }
    cout << rw << endl;
    return 0;
}