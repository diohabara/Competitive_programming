#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N, M;

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

signed main()
{
    int cnt = 0;
    cin >> N >> M;
    vector<int> p(N);
    UnionFind uf(N + 1);
    rep(i, N)
    {
        cin >> p[i];
    }
    rep(i, M)
    {
        int x, y;
        cin >> x >> y;
        uf.merge(x, y);
    }
    rep(i, N)
    {
        if (uf.issame(i + 1, p[i])) {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}