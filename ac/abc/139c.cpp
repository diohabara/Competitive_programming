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
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, N) { cin >> H[i]; }
    int m = 0;
    for (int i = 1; i < N; i++) {
        int tmp = 0;
        while (H[i - 1] >= H[i] && i < N) {
            tmp++;
            i++;
        }
        m = max(tmp, m);
    }
    cout << m << endl;
    return 0;
}