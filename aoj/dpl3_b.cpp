#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
#define MAX 1400

struct Rectangle {
    int height;
    int pos;
};

int getLargestRectangle(int size, int buffer[]) {
    // 行ごとに計算する
    stack<Rectangle> S;
    int maxv = 0;
    buffer[size] = 0;

    for (int i = 0; i <= size; i++) {
        Rectangle rect;  // まだ拡張される可能性のある長方形
        rect.height = buffer[i]; // 長方形の高さ
        rect.pos = i; // 左端の位置
        // Sが空->rectを入れる
        // Sが空でない->(Sの上の高さ < rectの高さ)->Sにpush
        // Sが空でない->(Sの上の高さ > rectの高さ)->Sにpush
        if (S.empty()) {
            S.push(rect);
        } else {
            if (S.top().height < rect.height) { // stackの上にある長方形の方がbufferの長方形の高さよりも低い時
                S.push(rect);
            } else if (S.top().height > rect.height) {
                int target = i; // targetをiとする
                // 一番heightが高くなるpreのposをtargetとする
                while (!S.empty() && S.top().height >= rect.height) { // stackに貯まっていて，Sの上にあるものの高さよりrectの高さが高い
                    Rectangle pre = S.top(); // stackの上のものをpreとする
                    S.pop(); // stackの上のものを取り出す
                    int area = pre.height * (i - pre.pos); // preの高さ * (現在の位置 - preの位置)
                    maxv = max(maxv, area); // maxvとareaの最大値を比べて高い方をmaxvを入れる
                    target = pre.pos; // targetを左端とする
                }
                rect.pos = target; // 拡張される可能性のある長方形の左端をtargetとする
                S.push(rect);
            }
        }
    }
    return maxv;
}

int H, W;
int buffer[MAX][MAX]; // 入力のタイル
int T[MAX][MAX]; // 入力から作るタイル

int getLargestRectangle() {
    for (int j = 0; j < W; j++) {
        for (int i = 0; i < H; i++) {
            if (buffer[i][j]) { // もしbufferに1が入っていれば
                T[i][j] = 0; // T[i][j]は0
            } else { // もしbufferに0が入っている時
                T[i][j] = (i > 0) ? T[i - 1][j] + 1 : 1; // iが0より大きい時， T[i][j] = 上の行の同じ列の値+1
            }
        }
    }

    int maxv = 0;
    for (int i = 0; i < H; i++) {
        maxv = max(maxv, getLargestRectangle(W, T[i]));
    }
    return maxv;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    scanf("%d %d", &H, &W);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &buffer[i][j]); // i行j列目の要素をbufferに入れる
        }
    }
    cout << getLargestRectangle() << endl;
    return 0;
}