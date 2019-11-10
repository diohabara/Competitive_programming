#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
#define NIL -1
const int MAX = 10000;

typedef struct Node {
    int p, l, r;
} Node;
Node T[MAX];
int n;

// 先行巡回
void preParse(int u)
{
    if (u == NIL) {
        return;
    }
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}
// 中間巡回
void inParse(int u)
{
    if (u == NIL) {
        return;
    }
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}
// 後行巡回
void postParse(int u)
{
    if (u == NIL) {
        return;
    }
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v, l, r, root;
    cin >> n;
    rep(i, n)
    {
        T[i].p = NIL;
    }
    rep(i, n)
    {
        cin >> v >> l >> r;
        T[v].l = l;
        T[v].r = r;
        if (l != NIL) {
            T[l].p = v;
        }
        if (r != NIL) {
            T[r].p = v;
        }
    }

    rep(i, n)
    {
        if (T[i].p == NIL) {
            root = i;
        }
    }

    printf("Preorder\n");
    preParse(root);
    printf("\n");
    printf("Inorder\n");
    inParse(root);
    printf("\n");
    printf("Postorder\n");
    postParse(root);
    printf("\n");
    return 0;
}