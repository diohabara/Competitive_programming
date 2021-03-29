#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int move[4] = {};
    rep(i, s.size()) {
        if (s[i] == 'N') {
            move[0]++;
        }
        if (s[i] == 'S') {
            move[1]++;
        }
        if (s[i] == 'E') {
            move[2]++;
        }
        if (s[i] == 'W') {
            move[3]++;
        }
    }
    bool is_x0 = false, is_y0 = false;
    if ((move[0] > 0 && move[1] > 0) || (move[0] == 0 && move[1] == 0)) {
        is_y0 = true;
    }
    if ((move[2] > 0 && move[3] > 0) || (move[2] == 0 && move[3] == 0)) {
        is_x0 = true;
    }
    if (is_x0 && is_y0) {
        puts("Yes");
    } else {
        puts("No");
    }
	return 0;
}