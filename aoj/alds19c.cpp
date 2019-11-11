#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
const ll H_MAX = 2000000;

ll H, A[H_MAX + 2];

void maxHeapify(ll i)
{
    ll largest = i;
    ll l = 2 * i;
    ll r = 2 * i + 1;
    if (l <= H && A[l] > A[largest]) {
        largest = l;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

void buildMaxHeap()
{
    for (ll i = H / 2; i >= 1; --i) {
        maxHeapify(i);
    }
}

ll extract()
{
    if (H < 1) {
        return -1;
    }
    ll maxv = A[1];
    A[1] = A[H--];
    maxHeapify(1);
    return maxv;
}

void insert(ll n)
{
    A[++H] = -1;
    if (n < A[H]) {
        return;
    } else {
        A[H] = n;
        ll i = H;
        while( i > 1 && A[i/2] < A[i]){
            swap(A[i / 2], A[i]);
            i /= 2;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string com;
    H = 0;
    while (1) {
        cin >> com;
        if (com == "insert") {
            ll n;
            cin >> n;
            insert(n);
        } else if (com == "extract") {
            cout << extract() << endl;
        } else {
            return 0;
        }
    }
    return 0;
}