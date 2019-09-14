#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
#define MAX 1000
#define VMAX 10000
int w[MAX];
bool done[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, mini = VMAX;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        mp[w[i]] = 0;
        mini = min(mini, w[i]);
    }

    int k = 0;
    for (auto& p : mp) {
        p.second = k++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (done[i]) {
            continue;
        }
        int cnt = 0, cur = i, sum = 0, mi = VMAX;
        while (true) {
            if (done[cur]) {
                break;
            }
            cnt++;
            done[cur] = true;
            mi = min(mi, w[cur]);
            sum += w[cur];
            cur = mp[w[cur]];
        }
        int tmp = sum + (cnt - 2) * mi;
        tmp = min(tmp, sum + mi + mini * (cnt + 1));
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}