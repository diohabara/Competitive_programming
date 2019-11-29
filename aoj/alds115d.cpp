#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if (s == string(s.size(), s[0])) { // 全て同じ文字
        cout << s.size() << endl;
        return 0;
    }
    vector<int> cnt(26); // 文字ごとの出現頻度を記録
    for (char c : s) {
        cnt[c - 'a']++;
    }
    priority_queue<int> pq;
    for (auto num : cnt) {
        if (num) {
            pq.push(-num);
        }
    }
    int ans = 0;
    while(pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans -= x + y;
        pq.emplace(x + y);
    }
    cout << ans << endl;
    return 0;
}