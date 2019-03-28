#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

// check prime numbers
int isPrime(int x) {
    int i;
    if (x < 2)
        return 0;
    else if (x == 2)
        return 1;
    if (x % 2 == 0) return 0;
    for (int i = 0; i * i <= x; i += 2) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x, i;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (isPrime(x)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}