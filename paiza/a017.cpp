#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    // h:高さ,w:幅, n:落ちものの個数
    int h, w, n;
    cin >> h >> w >> n;
    // h_i:落ちものの高さ，w_i:落ちものの幅, w_i:落ちものの左からの距離
    int h_i[30], w_i[30], x_i[30];
    for (int i = 0; i < n; i++) {
        cin >> h_i[i] >> w_i[i] >> x_i[i];
    }
    // 画面を初期化
    char area[h][w];
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            area[y][x] = '.';
        }
    }
    // すべての落ち物に対して
    int i = 0;
    // 落ち物の下のx座標がすべて'.'ならそのy座標から'#'に変える
    // y座標が小さいものから行う．
    for (int y = n - 1; y >= 0; y--) {
        int cnt = 0;
        for (int x = x_i[i]; x < x_i[i] + w_i[i]; x++) {
            if (area[y][x] ==
                '.') {  // 下の座標が'.'のときはcntをインクリメント
                cnt++;
            }
        }
        if (cnt == w_i[i]) {  // もし下の座標がすべて'.'のときは積み上げる
            for (int tate = y; tate > y - h_i[i]; tate--) {  // yからy-h_iまで
                for (int yoko = x_i[i]; yoko < x_i[i] + w_i[i]; yoko++) {
                    area[tate][yoko] = '#';
                }
            }
            i++;
        }
        if (y == 0 && cnt != w_i[i]) {
            i++;
        }
        if (i == n) {
            break;
        }
    }
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            cout << area[y][x];
        }
        cout << endl;
    }
    return 0;
}