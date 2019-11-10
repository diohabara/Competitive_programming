#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define NIL -1
struct Node_struct {
    int parent, left, right;
};
typedef struct Node_struct Node;
Node tree[MAX];
int n, depth[MAX];

void print(int u)
{
    int i, c;
    printf("node %d: parent = %d, depth = %d, ", u, tree[u].parent, depth[u]);
    if (tree[u].parent == NIL)
        printf("root, ");
    else if (tree[u].left == NIL)
        printf("leaf, ");
    else
        printf("internal node, ");
    printf("[");
    for (i = 0, c = tree[u].left; c != NIL; i++, c = tree[c].right) {
        if (i)
            printf(", ");
        printf("%d", c);
    }
    printf("]\n");
}

// 再帰的に深さを求める
void setDepth(int u, int parent)
{
    depth[u] = parent; // 最初は0
    if (tree[u].left != NIL) // 最も左の子に自分の深さ+1
        setDepth(tree[u].left, parent + 1);
    if (tree[u].right != NIL) // 右の兄弟に同じ深さを設定
        setDepth(tree[u].right, parent);
}

int main()
{
    int i, j, k;
    int N;
    int id, sib, child;
    int root = NIL;
    cin >> N;
    // 全ての節点の親,左右兄弟をNILで初期化する
    for (i = 0; i < N; i++)
        tree[i].parent = tree[i].left = tree[i].right = NIL;

    for (i = 0; i < N; i++) {
        cin >> id >> k;
        // tree[id]にはkだけ子供がいる
        for (j = 0; j < k; ++j) {
            cin >> child;
            if (j == 0) { // 最初の子供は左
                tree[id].left = child;
            } else {
                // tree[sib]はparentが同じ
                // あるid=tree[i].leftからsib=tree[id]にいけ
                // val=tree[sib].rightからいけるtree[val].rightがNILでないのは全て兄弟
                tree[sib].right = child;
            }
            sib = child;
            tree[child].parent = id;
        }
    }

    for (i = 0; i < N; i++) {
        if (tree[i].parent == NIL)
            root = i;
    }
    setDepth(root, 0);
    for (i = 0; i < N; i++)
        print(i);

    return 0;
}
