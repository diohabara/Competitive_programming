#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int n, q;
vector<int> S, T;

bool binarySearch(int key)
{
    int left = 0, right = n;
    int mid;
    while (left < right) {
        mid = (left + right) / 2;
        if (key > S[mid]) {
            left = mid + 1;
        } else if (key < S[mid]) {
            right = mid;
        } else {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    S.resize(n);
    rep(i, n) { cin >> S[i]; }
    cin >> q;
    T.resize(q);
    rep(i, q) { cin >> T[i]; }
    int cnt = 0;
    for (auto t : T) {
        if (t < S[0] || S[n - 1] < t) {
            continue;
        }
        if (binarySearch(t)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}