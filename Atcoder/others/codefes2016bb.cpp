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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int cnt_b = 0, cnt = 0;
    rep(i, n) {
        if (s[i] == 'a') {
            if (cnt < a + b) {
                puts("Yes");
                cnt++;
            } else {
                puts("No");
            }
        }
        if (s[i] == 'b') {
            cnt_b++;
            if (cnt < a + b && cnt_b <= b) {
                puts("Yes");
                cnt++;
            } else {
                puts("No");
            }
        }
        if (s[i] == 'c') {
            puts("No");
        }
    }
	return 0;
}