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
    int N;
    string S;
    cin >> N >> S;
    int cnt = 0;
    for (int i = 0; i < 1000; i++) {
        int num[3] = { i / 100, (i / 10) % 10, i % 10 };
        int f = 0;
        for (int j = 0; j < N; j++) {
            if (S[j] == ('0' + num[f])) {
                f++;
            }
            if (f == 3) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}