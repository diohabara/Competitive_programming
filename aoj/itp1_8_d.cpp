#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    // 入力
    string s, p;
    cin >> s >> p;

    // 文字列sを循環する形にする
    s += s;
    // 文字列pが連結させたsの中にあるか調べる
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, p.size()) == p) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}