#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // mの腕とm+1の関節
    // iの腕はi-1とiの関節を繋ぐ
    // iの腕の長さはd_i
    // 腕ごとにモードをL, R, D, Uを選ぶことができる
    // モードごとにx座標,y座標を+1,-1選ぶことが可能

    // 初期座標は(0, 0)
    // (x_i, y_i)に関節mを到達させる(0 <= i < N)
    // 無理なら-1
    ll N, M;
    cin >> N;
    vector<ll> x(N), y(N);
    for (int i = 0; i < N; ++i)  {
        cin >> x[i] >> y[i];
    }
    return 0;
}