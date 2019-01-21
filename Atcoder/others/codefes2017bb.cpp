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
    int n, m, d[200000], t[200000];
    cin >> n;
    rep(i, n) {
        cin >> d[i];
    }
    cin >> m;
    rep(i, m) {
        cin >> t[i];
    }

    sort(d, d+n);
    sort(t, t+m);

    int i = 0, j = 0, cnt = 0;
    while(i < m) {
        if (t[i] != d[j]) {  // tとdが違うならjの添字をインクリメント
            j++;
        } else {  // tとdが同じならcntとiをインクリメント
            cnt++;
            j++;
            i++;
        }
        if (cnt == m) {  // cntがmになったらtがdで埋められたということでYES
            puts("YES");
            return 0;
        }
        if (j == n) {  // cntがmになる前にjがnになったらNO
            puts("NO");
            return 0;
        }
    }
	return 0;
}