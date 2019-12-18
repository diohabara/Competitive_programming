#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define ll long long
using namespace std;

double fact(int n)
{
    if (n == 1) {
        return 1.0;
    } else {
        return n * (fact(n - 1));
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    double ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (c[i] % c[j] == 0) {
                    cnt++;
                }
            }
        }
        ans += 1. * (cnt / 2 + 1) / (cnt + 1);
    }
    cout.precision(10);
    cout << ans << endl;
    return 0;
}