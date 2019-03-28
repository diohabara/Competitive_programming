#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define for1(i, m, n) for (int i = m; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

class DisjointSet {
public:
    // rankは木の高さ(この数)，pは親
    vector<int> rank, p;

    DisjointSet() {}
    DisjointSet(int size)
    {
        // ベクターrankとpの大きさをsizeとして，足りない要素は0で補う
        rank.resize(size, 0);
        p.resize(size, 0);
        // すべての値を初期化する
        for (int i = 0; i < size; i++) {
            MakeSet(i);
        }
    }

    void MakeSet(int x)
    {
        // x番目の要素の親を自分自身にする
        // 木の高さ(子の数)も0で初期化する
        p[x] = x;
        rank[x] = 0;
    }

    bool same(int x, int y)
    {
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y)
    {
        link(findSet(x), findSet(y));
    }

    void link(int x, int y)
    {
        // 木の高さが高い方に木の高さが小さい方の親の親を設定する
        if (rank[x] > rank[y]) {
            // xの方が高いときはyの代表の親をxにする
            p[y] = x;
        } else {
            // それ以外はyをxの代表の親にする
            p[x] = y;
            if (rank[x] == rank[y]) {
                // 高さが同じ時は高さを一つ高くする
                rank[y]++;
            }
        }
    }

    int findSet(int x)
    {
        if (x != p[x]) { // xが代表でない(xの親がxでない)時
            p[x] = findSet(p[x]); // xの親の親が代表か調べる(これを再帰)
        }
        return p[x];  // xの属する集団の代表を返す
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a, b, q;
    int t;

    cin >> n >> q;
    DisjointSet ds = DisjointSet(n);

    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        if (t == 0) {
            ds.unite(a, b);
        } else if (t == 1) {
            if (ds.same(a, b)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}