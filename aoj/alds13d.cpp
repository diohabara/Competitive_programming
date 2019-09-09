#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    stack<int> s1;
    stack<pair<int, int>> s2;
    char ch;
    int sum = 0;
    for (int i = 0; cin >> ch; i++) {
        if (ch == '\\') {
            s1.push(i);
        } else if (ch == '/' && s1.size() > 0) {
            int j = s1.top();
            s1.pop();
            sum += i - j;
            int a = i - j;
            while (s2.size() > 0 && s2.top().first > j) {
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    int t = 0;
    while (s2.size() > 0 ) {
        ans.push_back(s2.top().second);
        s2.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for (int i = 0; i < ans.size(); i++) {
        cout << " ";
        t += ans[i];
        cout << ans[i];
    }
    cout << endl;
    return 0;
}