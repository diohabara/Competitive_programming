#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
#define INF 1e9;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> l;
    l.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort(l.rbegin(), l.rend());  // 降順にsort
    int ok = 3;
    bool cnt[3] = {};
    while (cnt[0] && cnt[1] && cnt[2]) {
        for (int i = 0; i < n; i++) {
            if (l[i] == a) {
                cnt[0] = true;
            } else if (l[i] == b) {
                cnt[1] = true;
            } else {
                cnt[2] = true;
            }
        }
        
    }
    cout << cnt << endl;
    return 0;
}