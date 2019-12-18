#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int l[100];
    int sum = 0, m = -1;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        sum += l[i];
        if (l[i] > m) {
            m = l[i];
        }
    }
    if (sum - 2 * m > 0) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}