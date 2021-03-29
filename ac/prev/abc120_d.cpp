#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

struct UnionFind {
    vector<int> par;

    UnionFind(int n)
        : par(n, -1)
    {
    }
    void init(int n) { par.assign(n, -1); }

    int root(int x)
    {
        if (par[x] < 0) {
            return x;
        } else {
            return par[x] = root(par[x]);
        }
    }

    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }

    bool merge(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y) {
            return false;
        }
        if (par[x] > par[y]) {
            swap(x, y);
        }
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x)
    {
        return -par[root(x)];
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N, M;
    cin >> N >> M;
    vector<ll> A(M), B(M);
    rep(i, M)
    {
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;
    }
    UnionFind uf(N);
    ll cur = N * (N - 1) / 2;
    vector<ll> res;
    for (int i = 0; i < M; i++) {
        res.push_back(cur);
        int a = A[M - 1 - i], b = B[M - 1 - i];
        if (uf.issame(a, b)) {
            continue;
        }
        ll sa = uf.size(a), sb = uf.size(b);
        cur -= sa * sb;
        uf.merge(a, b);
    }

    reverse(res.begin(), res.end());
    rep(i, res.size())
    {
        cout << res[i] << endl;
    }
    return 0;
}