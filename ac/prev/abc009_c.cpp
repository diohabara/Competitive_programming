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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string ans = s;

    for (int i = 0; i < n; i++) {
        int x = i;
        for (int j = i + 1; j < n; j++) {
            // 位置を変えられる文字数まで
            // ansの文字を入れ替える
            if (ans[x] > ans[j]) {
                string tmp = ans;
                swap(tmp[i], tmp[j]);

                int cnt = 0;
                for (int k = 0; k < n; k++) {
                    // 元の文字と違う文字の数
                    if (s[k] != tmp[k]) {
                        cnt++;
                    }
                }

                if (cnt <= k) {
                    x = j;
                }
            }
        }
        // ansのx番目は最小の文字である
        swap(ans[i], ans[x]);
    }
    cout << ans << endl;
    return 0;
}
