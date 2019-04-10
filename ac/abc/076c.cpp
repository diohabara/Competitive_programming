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
    string s, t;
    bool flag;
    cin >> s >> t;
    for (int i = s.size() - t.size(); i >= 0; i--) {
        flag = true;
        for (int j = 0; j < t.size(); j++) {
            if (s[i + j] != '?' && s[i + j] != t[j]) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            continue;
        }

        for (int j = 0; j < t.size(); j++) {
            s[i + j] = t[j];
        }
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '?') {
                s[j] = 'a';
            }
        }
        cout << s << endl;
        return 0;
    }

    puts("UNSTORABLE");
    return 0;
}