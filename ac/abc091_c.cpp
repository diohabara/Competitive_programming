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
    int n, cnt = 0;
    cin >> n;
    vector<P> red(n);
    vector<P> blue(n);
    for (int i = 0; i < n; i++) {
        cin >> red[i].first >> red[i].second;
    }
    for (int i = 0; i < n; i++) {
        cin >> blue[i].first >> blue[i].second;
    }
    vector<bool> used(n);  // この添字のblueは使われている
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());

    for (int i = 0; i < n; i++) {
        int maxy = -1,  // ペアとなるredの最大のy
            pos = -1;   //  ペアとなっていないredの添字
        for (int j = 0; j < n; j++) {
            if (red[j].first < blue[i].first &&
                red[j].second < blue[i].second) {
                // 最大のyがredのyよりも小さい and
                // j番目のredが使われていないとき
                if (maxy < red[j].second && !used[j]) {
                    maxy = red[j].second;  // maxyを更新
                    pos = j;               // redのposを更新
                }
            }
        }
        // posの値が初期値でない=更新されたとき
        if (pos >= 0) {
            used[pos] = true;  // posのredは使われたので
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}