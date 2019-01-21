#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;
int h, w, cnt = 0;
string s[410];

void search_bw(int x, int y)
{
    if (0 < x && y+1 < h) {
        if (s[y+1][x-1] == '#' && s[y+1][x] == '.') {
            cnt++;
            search_bw(x-1, y+1);
        }
    }else if (x + 2 < w && y + 1 < h) {
        if (s[y+1][x+1] == '#' && s[y+1][x+2] == '.') {
            cnt++;
            search_bw(x+1, y+1);
        }
    } else {
        return;
    }
}

void search_wb(int x, int y)
{
    if (0 < x && y+1 < h) {
        if (s[y+1][x-1] == '.' && s[y+1][x] == '#') {
            cnt++;
            search_wb(x-1, y+1);
        }
    }else if (x + 2 < w && x + 1 < h) {
        if (s[y+1][x+1] == '.' && s[y+1][x+2] == '#') {
            cnt++;
            search_wb(x+1, y+1);
        }
    } else {
        return;
    }
}

void search_bw2(int x, int y)
{
    if (x + 1 < w && y + 2 < h) {
        if (s[y+1][x+1] == '.' && s[y+2][x+1] == '#') {
            cnt++;
            search_bw2(x+1, y+1);
        }
    }else if (x + 1 < w && 0 < y - 1) {
        if (s[y-1][x+1] == '.' && s[y][x+1] == '#') {
            cnt++;
            search_bw(x+1, y-1);
        }
    } else {
        return;
    }
}

void search_wb2(int x, int y)
{
    if (x + 1 < w && y + 2 < h) {
        if (s[y+1][x+1] == '#' && s[y+2][x+1] == '.') {
            cnt++;
            search_bw2(x+1, y+1);
        }
    }else if (x + 1 < w && 0 < y - 1) {
        if (s[y-1][x+1] == '#' && s[y][x+1] == '.') {
            cnt++;
            search_bw(x+1, y-1);
        }
    } else {
        return;
    }
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    cin >> h >> w;
    rep(i, h) {
        cin >> s[i];
    }

    rep(y, h) {
        rep(x, w) {
            if (x < w) {
                if (s[y][x] == '#' && s[y][x+1] == '.') {
                    cnt++;
                    search_bw(x, y);
                }
                if (s[y][x] == '.' && s[y][x+1] == '#') {
                    cnt++;
                    search_wb(x, y);
                }
            }
            if (y < h) {
                if (s[y][x] == '.' && s[y+1][x] == '#') {
                    cnt++;
                    search_bw2(x, y);
                }
                if (s[y][x] == '#' && s[y+1][x] == '.') {
                    cnt++;
                    search_wb2(x, y);
                }
            }
        }
    }
    cout << cnt << endl;
	return 0;
}