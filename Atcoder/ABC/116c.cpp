#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h[101];
        cin >> n;
    REP(i, n) {
        cin >> h[i];
    }
    int cnt = 0;
    while(true) {
        int cnt0 = 0, non0 = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] > 0) {
                non0++;
            } else {
                cnt0++;
            }
            if ((h[i] > 0 && h[i + 1] <= 0) || (non0 == n)) {
                for(int j = 0; j <= i; j++) {
                    h[j]--;
                }
                cnt++;
                break;
            }
        }
        if (cnt0 == n) {
            break;
        }
    }
    printf("%d\n", cnt);
    return 0;
}