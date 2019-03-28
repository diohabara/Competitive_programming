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
    while(cin >> n, n) {
        double s[1000];
        double ave = 0;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            ave += s[i];
        }
        ave /= n;
        double std = 0;
        for (int i = 0; i < n; i++) {
            std += pow((s[i] - ave), 2);
        }
        std = sqrt(std / n);
        printf("%lf\n", std);
    }
    return 0;
}