#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int N;
vector<int> expo; // expo[素因数] = 指数

// expoの要素のうちm-1以上の個数を求める
int num(int m)
{
    int ret = 0;
    for (auto& u : expo) {
        if (u >= m - 1) {
            ret++;
        }
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    expo.resize(N + 1); //  指数
    // 素数で割り切れる数を求めている
    for (int i = 2; i <= N; i++) {
        int cur = i;
        for (int j = 2; j <= i; j++) {
            while (cur % j == 0) {
                expo[j]++;
                cur /= j;
            }
        }
    }
    ll ans = 0;
    ans += num(75); // 重複するのは0
    ans += num(25) * (num(3) - 1);
    ans += num(15) * (num(5) - 1);
    ans += num(5) * (num(5) - 1) * (num(3) - 2) / 2; // 5の順番が違うだけのものを重複して計算するから/2
    cout << ans << endl;
    return 0;
}