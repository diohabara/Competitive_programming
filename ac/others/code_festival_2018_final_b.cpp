#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
const ll MAX = 101010;
vector<long double> p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    p.resize(MAX);
    for (int i = 1; i <= MAX; ++i) {
        p[i] = p[i - 1] + log10(i); // 階乗の対数を求める
    }
    ll N, M;
    cin >> N >> M;
    long double prob = -p[N]; // 求める数は-log(p)
    for (int i = 0; i < M; ++i) {
        ll r;
        cin >> r;
        prob += p[r];
    }
    prob += log10(M) * N;
    cout << ceil(prob) << endl;
    return 0;
}