#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int n;
int A[100000];

int partition(int A[], int l, int r)
{
    int pivot = A[r];
    int lower = l - 1;
    for (int greater = l; greater < r; greater++) {
        if (A[greater] <= pivot) {
            lower++;
            swap(A[lower], A[greater]);
        }
    }
    swap(A[lower + 1], A[r]);
    return lower + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    rep(i, n) { cin >> A[i]; }
    int idx = partition(A, 0, n - 1);
    rep(i, n)
    {
        if (i) {
            printf(" ");
        }
        if (i == idx) {
            printf("[");
        }
        printf("%d", A[i]);
        if (i == idx) {
            printf("]");
        }
    }
    printf("\n");
    return 0;
}