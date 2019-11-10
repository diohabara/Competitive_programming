#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
const int MAX = 10000;
#define NIL -1

typedef struct tree {
    int parent, left, right;
} tree;
tree T[MAX];
int D[MAX], H[MAX]; // depth, height

void setDepth(int u, int d)
{
    if (u == NIL) {
        return;
    }
    D[u] = d;
    setDepth(T[u].left, d + 1);
    setDepth(T[u].right, d + 1);
}

int setHeight(int u)
{
    int h1 = 0, h2 = 0;
    if (T[u].left != NIL) {
        h1 = setHeight(T[u].left) + 1;
    }
    if (T[u].right != NIL) {
        h2 = setHeight(T[u].right) + 1;
    }
    return H[u] = max(h1, h2);
}

// 節点uの兄弟を返す
int getSibling(int u)
{
    if (T[u].parent == NIL) {
        return NIL;
    }
    if (T[T[u].parent].left != u && T[T[u].parent].left != NIL) {
        return T[T[u].parent].left;
    }
    if (T[T[u].parent].right != u && T[T[u].parent].right != NIL) {
        return T[T[u].parent].right;
    }
    return NIL;
}

void print(int u)
{
    printf("node %d: parent = %d, sibling = %d, ", u, T[u].parent, getSibling(u));
    int deg = 0;
    if (T[u].left != NIL) {
        deg++;
    }
    if (T[u].right != NIL) {
        deg++;
    }
    printf("degree = %d, depth = %d, height = %d, ", deg, D[u], H[u]);
    if (T[u].parent == NIL) {
        printf("root\n");
    } else if (T[u].left == NIL && T[u].right == NIL) {
        printf("leaf\n");
    } else {
        printf("internal node\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, root = 0;
    cin >> n;
    rep(i, n) { T[i].parent = NIL; }

    rep(i, n)
    {
        ll id, left, right;
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        if (left != NIL) {
            T[left].parent = id;
        }
        if (right != NIL) {
            T[right].parent = id;
        }
    }

    rep(i, n)
    {
        if (T[i].parent == NIL) {
            root = i;
        }
    }

    setDepth(root, 0);
    setHeight(root);

    rep(i, n)
    {
        print(i);
    }

    return 0;
}