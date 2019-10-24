#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

// 距離を測る関数
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

// その点が円の中にあるかどうか
bool check(int x, int y, double r) {
    double x1 = (double)x;
    double y1 = (double)y;

    if (dist(x1,y1,r,r) > r) {
        return true;
    } else {
        return false;
    }
}

// 円の中にある正方形の数を数える
int cal(int n) {
    int cnt = 0;
    double r = (double)n / 2.0; // 中心の点
    rep(i, n) {
        rep(j, n) {
            bool flag = false;
            rep(dx, 2) {
                rep(dy, 2) {
                    if (check(i+dx,j+dy,r)) {
                        flag = true;
                    }
                }
            }
            if (!flag) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    // 円の中心を(100,100)と(150,150)に置けば
    // 正方形の座標を(K*i, K*j)~(K*(i+1), K*(j+1))
    // を試せば良い
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll K;
    cin >> K;
    cout.precision(15);
    cout << cal(200 / K) << " " << cal(300 / K) << endl;
    return 0;
}