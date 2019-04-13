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
        cin >> blue[i].first >> blue[i].second;
    }
    for (int i = 0; i < n; i++) {
        int redx = red[i].first, redy = red[i].second;
        int pos = -1;
        for (int j = 0; j < n; j++) {
            int bluex = blue[j].first, bluey = blue[j].second;
            int minx = 300, miny = 300;
            if (redx < bluex && redy < bluey) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}