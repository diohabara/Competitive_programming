#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int idx = (n - 1) / 9;
    int num = (n - 1) % 9 + 1;
    string str = to_string(num);
    string ans;
    for (int i = 0; i < idx + 1; i++) {
        ans += str;
    }
    cout << ans << endl;
    return 0;
}