#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
const int N = 123456;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, even = 0, odd = 0;
    cin >> n;
    for (int i =0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if (odd % 2 == 0) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}