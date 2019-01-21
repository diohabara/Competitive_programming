#include <iostream>
using namespace std;
#define MAX 100000
typedef long long ll;

int n, k;
ll T[MAX];

int check(ll P)
{
    // 最大積載量Pのトラックk台で積める最大の荷物の個数を返す
    int i = 0;  // iは荷物の個数
    for (int j = 0; j < k; j++) {  // jはトラックの個数
        ll s = 0;  // sはこれまでトラック1台分の積載量
        while (s + T[i] <= P) {  // sが最大積載量になるまで積む
            s += T[i];
            i++;
            if (i == n) return n;  // 途中で与えられた荷物をすべて積んだらその個数を返す
        }
    }
    return i;  // すべての荷物を詰めなかったときは積めた荷物の個数を返す
}

int solve()
{
    // left:最大積載量と考えられる最小のもの
    // right:最大積載量と考えられる最大のもの
    ll left = 0;
    ll right = 100000 * 10000;
    ll mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);  // vはmid(=leftとrightの平均)が最大積載量のとき，トラックk台で積める最大の荷物の個数
        if (v >= n) right = mid;  // 積める荷物がnより大きい時，最大積載量が大きすぎるのでmidをrightにして，より小さい最大積載量で二分探索する
        else left = mid;  // そうでないときは最大積載量が小さいので，leftをmidにして，より大きい最大積載量で二分探索する
    }

    return right;  // rightとleftが重なったときが必要な最大積載量の最小値(荷物をすべて持つのに最低限の最大積載量)
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> T[i];
    ll ans = solve();
    cout << ans << endl;
}