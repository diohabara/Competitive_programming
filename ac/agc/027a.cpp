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
    ll int n, x;
    cin >> n >> x;
    ll int a[100];
    rep(i, n) {
        cin >> a[i];
    }
    sort(a, a+n);

    ll int sum = 0, m = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += a[i];  // sumに子供の欲しがるキャンディの数を足す
        if (sum > x) {  // xを超えたら終了
            break;
        }
    }
    if (i == n) {
        if (sum == x) {  // もしsumがxと等しかったらn人が満足する
            cout << n << endl;
        } else {  // そうでないときは1人は多すぎるからn-1人が満足する
            cout << n - 1 << endl;
        }
    } else {  // これはxを超えたときの場合(i = nまで到達しなかったとき)で，このときちょうどの個数を分けれる子供はi人
        cout << i << endl;
    }
	return 0;
}