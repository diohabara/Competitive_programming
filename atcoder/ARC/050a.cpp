#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    char C, c;
    cin >> C >> c;
    if (C - c == 'A' - 'a') {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}