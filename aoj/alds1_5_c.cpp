#include <stdio.h>
#include <math.h>

// 構造体で座標を決まる
struct Point { double x, y;};

void koch(int n, Point a, Point b)
{
    // nが0のときは何も返さない
    if (n == 0) return;

    // 座標s, t, uを二次元に定める
    Point s, t, u;
    double th = M_PI * 60.0 / 180.0;  // 度からラジアンに単位を変換

    // 三等分したときの左側の座標s(x, y)
    s.x = (2.0 * a.x + 1.0 * b.x) / 3.0;
    s.y = (2.0 * a.y + 1.0 * b.y) / 3.0;
    // 三等分したときの右側の座標t(x, y)
    t.x = (1.0 * a.x + 2.0 * b.x) / 3.0;
    t.y = (1.0 * a.y + 2.0 * b.y) / 3.0;
    // sの起点として60度tを左に傾けた座標がu(x, y)だから回転行列をかける
    u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;

    /*
    nが0になるまで再帰を続ける
    そしてnが0になった時点での座標をそれぞれ出力する
    */
    koch(n-1, a, s);
    printf("%.8f %.8f\n", s.x, s.y);
    koch(n-1, s, u);
    printf("%.8f %.8f\n", u.x, u.y);
    koch(n-1, u, t);
    printf("%.8f %.8f\n", t.x, t.y);
    koch(n-1, t, b);
}

int main()
{
    Point a, b;
    int n;

    scanf("%d", &n);

    a.x = 0;
    a.y = 0;
    b.x = 100;
    b.y = 0;

    printf("%.8f %.8f\n", a.x, a.y);
    koch(n, a, b);
    printf("%.8f %.8f\n", b.x, b.y);

    return 0;
}