#include <stdio.h>
#define N 100
#define WHITE 0 // 未訪問の頂点
#define GRAY 1  // 訪問した頂点
#define BLACK 2 // 訪問を完了した頂点

int n, M[N][N];
int color[N], d[N], f[N], tt; // dは最初に訪問した時間，fは最後に訪問した時間

// 再帰関数による深さ優先探索
void dfs_visit(int u)
{
    int v;
    color[u] = GRAY; // uを訪問したことにする
    d[u] = ++tt;     // 最初の訪問
    for (v = 0; v < n; v++)
    {
        // uの周りの頂点に関して
        // 未訪問のとき，再帰をして訪問したことにする
        if (M[u][v] == 0)
        { // パスがない
            continue;
        }
        if (color[v] == WHITE)
        { // 未訪問
            dfs_visit(v);
        }
    }
    // 上の再帰が終了(= uを始点としてすべてのパスを通ったとき)
    // すべての頂点に訪問を完了したら色を黒にする
    color[u] = BLACK;
    f[u] = ++tt; // 訪問の完了
}

void dfs()
{
    int u;
    // 初期化
    for (u = 0; u < n; u++)
    {
        color[u] = WHITE;
    }
    tt = 0;

    for (u = 0; u < n; u++)
    {
        // 未訪問のuを始点として深さ優先探索
        if (color[u] == WHITE)
        {
            dfs_visit(u);
        }
    }
    for (u = 0; u < n; u++)
    {
        printf("%d %d %d\n", u + 1, d[u], f[u]);
    }
}

int main()
{
    int u, v, k, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            M[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &u, &k);
        u--;
        for (j = 0; j < k; j++)
        {
            scanf("%d", &v);
            v--;
            M[u][v] = 1;
        }
    }

    dfs();

    return 0;
}