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
    int cnt[4] = {1, 1, 1, 2};
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (s[i] == 'y') cnt[0]--;
        if (s[i] == 'a') cnt[1]--;
        if (s[i] == 'h') cnt[2]--;
        if (s[i] == 'o') cnt[3]--;
    }
    rep(i, 4) {
        if (cnt[i] > 0) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
	return 0;
}