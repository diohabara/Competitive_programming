#include <stdio.h>
#include <string.h>
#define LEN 100005

// プロセスを表す構造体
typedef struct pp{
    char name[100];
    int t;
} P;

// Pと同じ構造で長さがLENの構造体Qを作る
P Q[LEN];
int head, tail, n;

// 引数がPとxであり，xをQの末尾につけ，末尾を指すインデックスの数字を一つ増やし，あまりを取る
void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

// Pの構造体でxを参照し，Qの先頭をPのxに加え，先頭の大きさを一つt増やす
P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) { return a < b ? a : b; } //最小値を返す

int main(){
    int elaps = 0, c;
    int i, q;
    P u;
    scanf("%d %d", &n, &q);

    //すべてのプロセスをキューに順番に追加する
    for ( i = 1; i <= n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }
    head = 1; tail = n + 1;

    // シミュレーション
    while ( head != tail){
        u = dequeue();
        c = min(q, u.t);  // qまたは必要な時間 u.t だけ処理を行う
        u.t -= c; // 残りの必要時間を計算
        elaps += c;  // 経過時間を加算
        if (u.t > 0) enqueue(u);  // 処理が完了していなければキューに追加
        else{
            printf("%s %d\n", u.name, elaps);  // 名前と経過時間を出力
        }
    }

    return 0;
}