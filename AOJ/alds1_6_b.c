#include <stdio.h>
#define MAX 100000

int A[MAX], n;

int partition(int p, int r)
{
    // pからr-1までをパーティションする
    int x, i, j, t;
    x = A[r];  // A[r]を基準としてxをA[r]とする
    i = p - 1;  // iはp-1とする
    for (j = p; j < r; j++) {
        // p <= j < rとしてjは1つずつ大きくなる
        if (A[j] <= x) {
            // A[j]がx以下のとき
            // iをインクリメントして，A[i]とA[j]を交換する
            i++;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
        // A[j]がxより大きいときは何もしない
    }
    // A[i + 1]とA[r]を交換する
    // つまりxより大きい要素で最も交換されたのが遅いものとA[r + 1]を交換する
    t = A[i + 1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;  // A[r]が移動した場所を返す
}

int main(int argc, char const *argv[])
{
    int i, q;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    q = partition(0, n - 1);

    for (i = 0; i < n; i++) {
        // 移動済みの数列を表示する．
        // 基準となった数のみ[]で囲まれる
        if (i) {
            printf(" ");
        }
        if (i == q) {
            printf("[");
        }
        printf("%d", A[i]);
        if (i == q) {
            printf("]");
        }
    }
    printf("\n");

    return 0;
}
