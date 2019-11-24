#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll A, B, X;

ll digi(ll n)
{
    ll num = 1;
    while (n / 10) {
        num++;
        n /= 10;
    }
    return num;
}

ll getMax()
{
    ll left = 0, right = 1e9;
    ll mid;
    ll cnt = 0;
    while (left < right) {
        // cout << left << " " << right << endl;
        cnt++;
        mid = (left + right) / 2;
        if (X < A * mid + B * digi(mid)) { // 値が想定より小さい
            right = mid;
        } else if (X > A * mid + B * digi(mid)) { // 値が想定より大きい
            left = mid + 1;
        } else if (A * mid + B * digi(mid) == X) {
            return mid;
        }
    }
    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> A >> B >> X;
    if (A > X || B > X) {
        cout << 0 << endl;
        return 0;
    }
    ll num = getMax();
    num++;
    if (A * num + B * digi(num) <= X) {
        cout << num << endl;
    } else if (A * (num - 1) + B * digi(num - 1) <= X) {
        cout << num - 1 << endl;
    } else {
        cout << num - 2 << endl;
    }
    return 0;
}