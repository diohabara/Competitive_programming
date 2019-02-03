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
    double sum;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            sum += 4;
        } else if (s[i] == 'B') {
            sum += 3;
        } else if (s[i] == 'C') {
            sum += 2;
        } else if (s[i] == 'D') {
            sum++;
        }
    }
    printf("%.9lf\n", sum / n);
    return 0;
}