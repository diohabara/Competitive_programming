#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int N, Q;
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
    cin >> N >> Q;
    UnionFind uf(N);
    rep(i, Q)
    {
        int p, a, b;
        cin >> p >> a >> b;
        if (p == 0) {
            uf.merge(a, b);
        }else {
            if (uf.issame(a, b)) {
                puts("Yes");
            } else {
                puts("No");
            }
        }
    }
    return 0;
}