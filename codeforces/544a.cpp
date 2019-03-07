#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int h, m;
    int a_h = (a[0] - '0') * 10 + (a[1] - '0');
    int b_h = (b[0] - '0') * 10 + (b[1] - '0');
    int a_m = (a[3] - '0') * 10 + (a[4] - '0');
    int b_m = (b[3] - '0') * 10 + (b[4] - '0');
    int a_t = a_h * 60 + a_m;
    int b_t = b_h * 60 + b_m;
    m = (b_t + a_t) / 2;
    h = m / 60;
    m = m % 60;
    // int ans_h, ans_m;
    // ans_m = (m + a_m);
    // ans_h = (h + a_h);
    // if (ans_m >= 60) {
    //     ans_h = ans_h + ans_m / 60;
    //     ans_m -= 60;
    // }
    printf("%02d:%02d\n", h, m);
    return 0;
}