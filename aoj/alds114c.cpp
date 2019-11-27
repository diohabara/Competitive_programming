#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
ull A = 9999973; // 縦
ull B = 950527; // 横

int H, W, R, C;
string txt[1005]; // 検索テキスト
string pat[1005]; // 検索パターン
ull t[1005][1005];
ull t2[1005][1005];

int main()
{
    cin >> H >> W;
    rep(i, H)
    {
        cin >> txt[i];
    }
    cin >> R >> C;
    rep(i, R)
    {
        cin >> pat[i];
    }

    // patternのハッシュ値を決めている
    ull target = 0;
    rep(i, R) {
        ull key = 0;
        rep(j, C) {
            key = key * B + pat[i][j];
        }
        target = target * A + key;
    }

    ull c = pow(B, C);

    // textのハッシュ配列を決めている
    rep(i, H) {
        ull key = 0;
        rep(j, W) {
            key = key * B + txt[i][j];
            if (j - C >= 0) { // これよりはpatternが収まらない
                key -= txt[i][j - C] * c;
            }
            t[i][j] = key;
            t2[i][j] = t[i][j];
        }
    }

    c = pow(A, R);

    rep(i, H) {
        rep(j, W) {
            if (i) { // 最初の行以外
                t[i][j] += t[i - 1][j] * A; // 前の行の値を加える
            }
            if (i - R >= 0) { //ここからはpatternが収まらない
                t[i][j] -= t2[i - R][j] * c;
            }
            if (t[i][j] == target) { // ハッシュ値が条件を満たす
                if (i - R + 1 >= 0 && j - C + 1 >= 0) { // patternがtext内に収まるとき
                    printf("%d %d\n", i - R + 1, j - C + 1);
                    // cout << i - R + 1 << " " << j - C + 1 << endl;
                }
            }
        }
    }

    return 0;
}