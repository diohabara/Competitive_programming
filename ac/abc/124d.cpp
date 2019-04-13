#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool flag;  // 先頭が直立か逆立ちか
    if (s[0] == '0') {
        flag = true;  // 直立
    } else {
        flag = false;  // 逆立ち
    }
    vector<ll> cnt_0(n);
    vector<ll> cnt_1(n);

    return 0;
}