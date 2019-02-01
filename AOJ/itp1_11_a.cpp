#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int dice[6];
    for (int i = 0; i < 6; i++) {
        cin >> dice[i];
    }
    string s;
    cin >> s;
    int cnt[4] = {};
    REP(i, s.size())
    {
        if (s[i] == 'S') {
            cnt[0]++;
        } else if (s[i] == 'E') {
            cnt[1]++;
        } else if (s[i] == 'W') {
            cnt[2]++;
        } else if (s[i] == 'N') {
            cnt[3]++;
        }
    }
    int ver = abs(cnt[3] - cnt[0]);
    int hor = abs(cnt[1] - cnt[2]);
    int dic = (ver + hor) / 2;
    
    return 0;
}