#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int n, k;
int t[10][10];

// numQ: 今の質問数
// value: XORを使った値
bool dfs(int num, int value)
{
    // 質問がもうなければ，値が0になっているかを調べる
    if (num == n) {
        return (value == 0);
    }
    // 次の質問で行う
    // 深さ優先探索で行う
    for (int i = 0; i < k; i++) {
        if (dfs(num + 1, value^t[num][i])) {
            return true;
        }
    }
    // 探索した結果，0になる組み合わせがなければfalse
    return false;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> t[i][j];
        }
    }
    bool ans = dfs(0, 0);
    if (ans) {
        puts("Found");
    } else {
        puts("Nothing");
    }
    return 0;
}