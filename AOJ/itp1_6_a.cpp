#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a[100];
    cin >> n;
    REP(i, n){
        cin >> a[i];
    }
    REP(i, n) {
        if (i) {
            cout << " ";
        }
        cout << a[n - i - 1];
    }
    cout << endl;
    return 0;
}