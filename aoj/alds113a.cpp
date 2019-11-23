#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

#define N 8
#define FREE -1 // おける
#define NOT_FREE 1 // おけない

int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];
bool X[N][N];

void initialize()
{
    memset(row, FREE, sizeof(row));
    memset(col, FREE, sizeof(col));
    memset(dpos, FREE, sizeof(dpos));
    memset(dneg, FREE, sizeof(dneg));
}

void printBoard()
{
    rep(i, N)
    {
        rep(j, N)
        {
            if (X[i][j]) {
                if (row[i] != j) {
                    return;
                }
            }
        }
    }
    rep(i, N)
    {
        rep(j, N)
        {
            cout << ((row[i] == j) ? "Q" : ".");
        }
        cout << endl;
    }
}

void rec(int i)
{
    if (i == N) {
        printBoard();
        return;
    }
    rep(j, N)
    {
        // (i,j)が他のクイーンに襲撃されている場合は無視
        if (col[j] == NOT_FREE || dpos[i + j] == NOT_FREE || dneg[i - j + N - 1] == NOT_FREE) {
            continue;
        }
        // (i,j)にクイーンを配置
        row[i] = j;
        // クイーンの置けない部分を指定する
        col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOT_FREE;
        // 次の行を試す
        rec(i + 1);
        // (i,j)に配置されているクイーンを取り除く
        row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
    }
    // クイーンの配置に失敗
}

int main()
{
    initialize();

    memset(X, false, sizeof(X));

    int k;
    cin >> k;
    rep(i, k)
    {
        int r, c;
        cin >> r >> c;
        X[r][c] = true;
    }

    rec(0);

    return 0;
}
