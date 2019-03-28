#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node{int p, l, r;};
struct Node T[MAX];
int n;

// 先行順巡回
void preParse(int u)
{
    // 親->左の子->右の子
    if (u == NIL) {  // 端点まで探索
        return;
    }
    printf(" %d", u);  // 親
    preParse(T[u].l);  // 左の子に行く
    preParse(T[u].r);  // 右の子に行く
}

// 中間順巡回
void inParse(int u)
{
    // 左の子->親->右の子
    if (u == NIL) {  // 端点まで探索
        return;
    }
    inParse(T[u].l);  // 左の子に行く
    printf(" %d", u);  // 親
    inParse(T[u].r);  // 右の子に行く
}

// 後行順巡回
void postParse(int u)
{
    // 左の子->右の子->親
    if (u == NIL) {  // 端点まで
        return;
    }
    postParse(T[u].l);  // 左の子
    postParse(T[u].r);  // 右の子
    printf(" %d", u);  // 親
}

int main()
{
    int i, v, l, r, root;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        T[i].p = NIL;
    }

    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if (l != NIL) {
            T[l].p = v;
        }
        if (r != NIL) {
            T[r].p = v;
        }
    }

    for (i = 0; i < n; i++) {
        if (T[i].p == NIL) {
            root = i;
        }
    }

    // 先行順巡回
    printf("Preorder\n");
    preParse(root);
    printf("\n");

    // 中間順巡回
    printf("Inorder\n");
    inParse(root);
    printf("\n");

    // 後行順巡回
    printf("Postorder\n");
    postParse(root);
    printf("\n");

    return 0;
}