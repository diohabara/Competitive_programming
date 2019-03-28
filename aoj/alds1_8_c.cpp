#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

Node* treeMinimum(Node *x)
{
    // treeの中で最小の要素を返す
    while(x->left != NIL) {
        x = x->left;
    }
    return x;
}

Node* find(Node* u, int k)
{
    // key=kであるNodeを探す
    while(u != NIL && k != u->key) {
        if (k < u->key) {
            u = u->left;
        } else {
            u = u->right;
        }
    }
    return u;
}

Node* treeSuccessor(Node* x)
{
    if (x->right != NIL) {  // xに右の子があるとき，右部分木の最もキーが小さい節点がxの次節点
        return treeMinimum(x->right);
    }
    Node* y = x->parent;  // xの親をyとする
    // 最初に左の子になっている節点の親を次節点とする
    while(y != NIL && x == y->right) {  // yがNILでなく，xがyの右の子ならば
        x = y;  // xをyとして
        y = y->parent;  // yをyの親とする
    }
    return y;
}

void treeDelete(Node* z)
{
    Node *y;  // 削除する対象
    Node *x;  // yの子

    // 削除する節点を決める
    if (z->left == NIL || z->right == NIL) {  // zにどちらかの子が欠けていたらzを削除する
        y = z;
    } else {
        y = treeSuccessor(z);  // 残りのNodeを探索する
    }

    // yの子xを決める
    // ここでyにつながるポインタを移し替えている

    // yの子をxとしている
    if (y->left != NIL) {  // yに左の子がいたらxをyの左の子にする
        x = y->left;
    } else {  // yに左の子がいなかったらxをyの右のこにする
        x = y->right;
    }

    // yの子xの親をyの親にしている
    if (x != NIL) {  // xが空でなければxの親をyの親にする
        x->parent = y->parent;
    }

    // yの位置にxを入れている
    if (y->parent == NIL) {  // yの親がからならxはroot
        root = x;
    } else {  // yが左の子ならその位置にxを挿入
        if (y == y->parent->left) {
            y->parent->left = x;
        } else {  // yが右の子ならその位置にxを挿入
            y->parent->right = x;
        }
    }

    if (y != z) {  // yがzでなければyの値をzの値に代入する
        z->key = y->key;
    }

    // 不必要になったyのメモリを開放している
    free(y);
}

void insert(int k)
{
    Node *y = NIL;  // yをNIL(zの親候補)
    Node *x = root;  // xをrootとする(現在の節点)
    Node *z;  // これから挿入するつもりの節点

    // zのメモリ領域を確保し，key, left, rightを設定する
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    // x(現在の節点)に関する処理
    // xがleafになるまで続ける
    while(x != NIL) {
        y = x;  // zの親としてxをyに代入
        if (z->key < x->key) {
            // xをxの左の子とする
            x = x->left;
        } else {
            // xをxの右の子とする
            x = x->right;
        }
    }

    // y(zの親候補)に関する処理
    z->parent = y;  // zの親をyとする
    if (y == NIL) {  // yがNIL(xがNIL)ならばrootはz
        root = z;
    } else {  // そうでないとき
        if (z->key < y->key) {
            // yの左の子をzとする
            y->left = z;
        } else {
            // yの右の子をzとする
            y->right = z;
        }
    }
}

void inorder(Node *u)
{
    // 中間順巡回
    if (u == NIL) {
        return;
    }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u)
{
    // 先行順巡回
    if (u == NIL) {
        return;
    }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main()
{
    int n, i, x;
    string com;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        cin >> com;
        if (com[0] == 'f') {
            scanf("%d", &x);
            Node* t = find(root, x);
            if (t != NIL) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        } else if (com == "insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if (com == "delete") {
            scanf("%d", &x);
            treeDelete(find(root, x));
        }
    }

    return 0;
}