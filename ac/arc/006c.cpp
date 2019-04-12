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
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i, n) { cin >> w[i]; }

    vector<int> pile;  // ダンボールの山，i番目の山の最も軽い重さ
    for (int i = 0; i < n; i++) {
        int pos = -1;
        // ダンボールの山，それぞれに関して比較する
        for (int j = 0; j < pile.size(); j++) {
            if (pile[j] >= w[i]) {
                if (pos == -1) {
                    pos = j;
                } else if (pile[j] < pile[pos]) {
                    pos = j;
                }
            }
        }
        if (pos == -1) {  // posが-1のとき，新しいダンボールの山を作る
            pile.push_back(w[i]);
        } else {  // 
            pile[pos] = w[i];
        }
    }
    cout << pile.size() << endl;
    return 0;
}