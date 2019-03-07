#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[j] - a[i] <= 5) {
                tmp++;
            } else {
                cnt = max(cnt, tmp + 1);
                break;
            }
        }
    }
    if (cnt == 0) {
        cnt = n;
    }
    cout << cnt << endl;

    return 0;
}