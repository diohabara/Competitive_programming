#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main(void)
{
    ll int n, k;
    cin >> n >> k;
    ll int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    sort(h, h+n);
    ll int minj = 1000000000;
    for (int i = 0; i <= n-k; i++) {
        minj = min(minj, (h[k-1+i] - h[i]));
    }
    cout << minj << endl;
	return 0;
}
