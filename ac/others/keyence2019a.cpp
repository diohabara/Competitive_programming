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
    int n[4];
    rep(i, 4) {
        cin >> n[i];
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    rep(i, 4) {
        if (n[i] == 1) cnt1++;
        if (n[i] == 7) cnt2++;
        if (n[i] == 9) cnt3++;
        if (n[i] == 4) cnt4++;
    }
    if (cnt1 && cnt2 && cnt3 && cnt4) {
        puts("YES");
    } else {
        puts("NO");
    }
	return 0;
}