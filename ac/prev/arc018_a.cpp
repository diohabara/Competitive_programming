#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    double height, bmi;
    cin >> height >> bmi;
    printf("%lf\n", bmi * height * height / 10000.0);
    return 0;
}