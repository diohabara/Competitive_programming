#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < n; i++)
ull A = 9999973;
ull B = 950527;

int H, W, R, C;
string txt[1005];
string pat[1005];
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

    ull target = 0;
    rep(i, R)
    {
        ull key = 0;
        rep(j, C)
        {
            key = key * B + pat[i][j];
        }
        target = target * A + key;
    }

    ull c = 1;
    rep(i, C) c *= B;

    rep(i, H)
    {
        ull key = 0;
        rep(j, W)
        {
            key = key * B + txt[i][j];
            if (j - C >= 0)
                key -= txt[i][j - C] * c;
            t[i][j] = key;
            t2[i][j] = t[i][j];
        }
    }

    c = 1;
    rep(i, R) c *= A;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i) {
                t[i][j] += t[i - 1][j] * A;
            }
            if (i - R >= 0) {
                t[i][j] -= t2[i - R][j] * c;
            }
            if (t[i][j] == target) {
                if (i - R + 1 >= 0 && j - C + 1 >= 0)
                    printf("%d %d\n", i - R + 1, j - C + 1);
            }
        }
    }

    return 0;
}
