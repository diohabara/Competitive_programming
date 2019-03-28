#include<cstdio>
#define MAX 10000
#define NIL -1

struct Node {int parent, left, right;};  // 木の構造体，親，左の子，右の子を設定

Node T[MAX];
int n, D[MAX], H[MAX];  // D, Hはそれぞれ深さと高さの配列

void setDepth(int u, int d)
{
    if (u == NIL) return;  // 端点まで行ったら終了
    D[u] = d;  // D[u]を節点uの深さとする
    // 左右の子を探索して端点までの距離を探る
    setDepth(T[u].left, d + 1);
    setDepth(T[u].right, d + 1);
}

int setHeight(int u)
{
    int h1 = 0, h2 = 0;  // 高さの初期値を0とする
    if (T[u].left != NIL) {  // 左端まで探索して，探索するごとに高さをインクリメントする
        h1 = setHeight(T[u].left) + 1;
    }
    if (T[u].right != NIL) {  // 右端まで探索して，探索するごとに高さをインクリメントする
        h2 = setHeight(T[u].right) + 1;
    }
    return H[u] = (h1 > h2 ? h1 : h2);  // 最も高くなるleafを出力する
}

// 節点uの兄弟を返す
int getSibling(int u)
{
    if (T[u].parent == NIL) {  // 親がいなければ0
        return NIL;
    }
    if (T[T[u].parent].left != u && T[T[u].parent].left != NIL) {  // 自分が親の左の子でなく，左の子が入れば左を返す
        return T[T[u].parent].left;
    }
    if (T[T[u].parent].right != u && T[T[u].parent].right != NIL) {  // 自分が親の右の子でなく，左の子が入れば左を返す
        return T[T[u].parent].right;
    }
    return NIL;  // 上記以外ならば0
}

void print(int u)
{
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].parent);
    printf("sibling = %d, ", getSibling(u));
    int deg = 0;
    if (T[u].left != NIL) {  // もし左の子がいれば次数をインクリメント
        deg++;
    }
    if (T[u].right != NIL) {  // もし右の子がいれば次数をインクリメント
        deg++;
    }
    printf("degree = %d, ", deg);
    printf("depth = %d, ", D[u]);
    printf("height = %d, ", H[u]);

    if (T[u].parent == NIL) {  // 親がいなければroot
        printf("root\n");
    } else if (T[u].left == NIL && T[u].right == NIL) {  // 子どもがいなければleaf
        printf("leaf\n");
    } else {  // 上記以外なら内部節点
        printf("internal node\n");
    }
}

int main()
{
    int v, l, r, root = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        T[i].parent = NIL;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if (l != NIL) {
            T[l].parent = v;
        }
        if (r != NIL) {
            T[r].parent = v;
        }
    }

    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) {
            root = i;
        }
    }

    setDepth(root, 0);
    setHeight(root);

    for (int i = 0; i < n; i++) {
        print(i);
    }

    return 0;
}