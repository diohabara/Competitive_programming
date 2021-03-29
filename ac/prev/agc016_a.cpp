#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int ans = 1e9;                          // 十分大きな値にansを設定
    for (char ch = 'a'; ch <= 'z'; ch++) {  // character 'a' to 'z' 全探索
        string t = s;            // sをコピーした文字列tを作る
        for (int i = 0;; i++) {  // iを0から初めて無限にインクリメント
            if (t.empty()) {  // もし文字列tが空になったら終了
                break;
            }
            if (t == string(t.size(), ch)) {  // 文字列tがすべてchの文字列になったら色をansを更新して終了
                ans = min(ans, i);
                break;
            }
            string nt = "";  // 空の文字列ntを作る
            for (int j = 0; j < t.size() - 1; j++) {  // jを0->文字列tの大きさ-1まで増やす
                if (t[j] == ch ||
                    t[j + 1] == ch) {  // tのjかj+1文字目chならntにchを加える
                    nt += ch;
                } else {  // それ以外はそのまま
                    nt += t[j];
                }
            }
            // 上の作業で|nt| = |t| - 1になる
            t = nt;
        }
    }
    cout << ans << endl;
    return 0;
}