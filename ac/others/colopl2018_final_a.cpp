#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

// n項までの和
ll arith(ll n)
{
    return n * (n + 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    string S;
    cin >> N >> S;
    ll first = 0, last = 0;
    bool isFirst = true;

    ll sum = 0, conseq = 0;
    for (int i = 0; i < (int)S.size(); ++i) {
        if (S[i] == 'A') {
            ++conseq;
            sum += conseq;
        } else {
            // 最初から続くAの列を記録する(なければ0)
            if (isFirst) {
                first = conseq;
                isFirst = false;
            }
            conseq = 0;
        }
    }
    // もし全てAのときは答えは初項1, 末項N*S, 項数N*Sの等差数列
    if (isFirst) {
        ll num = (ll)S.size() * N;
        cout << arith(num) << endl;
        return 0;
    }

    last = conseq; // 最後に続いていたAの数
    ll ans = sum - arith(first) - arith(last);
    ans *= N;
    ans += arith(first) + arith(last);
    ll tmp = first + last;
    ans += (N - 1) * arith(tmp);

    cout << ans << endl;
    return 0;
}