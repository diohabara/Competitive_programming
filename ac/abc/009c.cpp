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
    vector<pair<char, int> > store;
    store.resize(n);
    rep(i, n) {
        store[i].first = s[i];  // sのi番目の文字
        store[i].second = i;    // その文字の番号(i)
    }
    sort(store.begin(), store.end());  // 文字でソート

    string ans = "";  // 答えを格納する文字列

    // 位置を変えても良い文字を入れる
    // そのときに添字ごとを削除する
    rep(i, k) {
        ans += store[i].first;
        store[i].second = -1;
    }

    rep(i, n) {
        bool unused = false;  // この文字が位置の変わった文字に含まれないか
        rep(j, n) {
            if (i == store[j].second) {
                unused = true;
            }
        }
        // 位置が変わっているとき
        // は次のこの文字は答えに格納しない
        if (unused) {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
