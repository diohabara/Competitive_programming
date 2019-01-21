#include <stdio.h>

int n, A[50];

int solve(int i, int m)
{
    // Aは探索する要素の配列，iは探索した要素の数，nは探索する要素の最大値，mは作りたい数
    if (m == 0) return 1;  // 要素iから最後のn-1の要素まで足してmになる場合はtrue
    if (i >= n) return 0;  // 要素iから最後のn-1の要素まで足してmにならない場合はfalse
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);  // 各要素ごとに足すか足さないかで分岐する(mから要素分引くことで合計を表現)
    return res;
}

int main()
{
    int q, M, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &M);
        if (solve(0, M)) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    return 0;
}