#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
ll N, A, B, C;
vector<ll> l;

void chmin(int& a, int b)
{
    if (a > b) {
        a = b;
    }
}

int rec(int cur, int a, int b, int c)
{
    // すべての竹を使うかどうか決めた場合
    if (cur == N) {
        // a,b,cのいずれも竹を一本以上使う
        return min({ a, b, c }) > 0 ? abs(a - A) + abs(b - B) + abs(c - C) : INF;
    }

    // 今ある竹を採用しない
    int res = rec(cur + 1, a, b, c);

    // A,B,Cを使う
    // 合成した場合,竹の数を一つ消費して,l[cur]をa or b or cのために使う
    chmin(res, rec(cur + 1, a + l[cur], b, c) + (a ? 10 : 0));
    chmin(res, rec(cur + 1, a, b + l[cur], c) + (b ? 10 : 0));
    chmin(res, rec(cur + 1, a, b, c + l[cur]) + (c ? 10 : 0));

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> A >> B >> C;
    l.resize(N);
    rep(i, N) { cin >> l[i]; }
    cout << rec(0, 0, 0, 0) << endl;
    return 0;
}