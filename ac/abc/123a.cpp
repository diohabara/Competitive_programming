#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int num[5], k;
    rep(i, 5) { cin >> num[i]; }
    cin >> k;
    rep(i, 5) {
        rep(j, 5) {
            if (num[i] - num[j] > k) {
                puts(":(");
                return 0;
            }
        }
    }

    puts("Yay!");
    return 0;
}