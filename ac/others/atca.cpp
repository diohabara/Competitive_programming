#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
const int MAX_H = 500;
const int MAX_W = 500;
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;
    char c[MAX_H][MAX_W];
    rep(i, h) {
        rep(j, w) { cin >> c[i][j]; }
    }
    return 0;
}