#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
#define MAX 1000005
#define NIL -1

struct Node {
    int p, l, r;
};

Node T[MAX];
int n, D[MAX];

void print(int u)
{
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) {
        cout << "root, ";
    } else if (T[u].l == NIL) {
        cout << "leaf, ";
    } else {
        cout << "internal node, ";
    }
    cout << "[";
    for (int i = 0, c = T[u].l; c != NIL; i++, c = T[c].r) {
        if (i) {
            cout << ", ";
            cout << c;
        }
    }
    cout << "]" << endl;
    return;
}

void rec(int u, int p)
{
    D[u] = p;
    if (T[u].r != NIL) {
        rec(T[u].r, p);
    }
    if (T[u].l != NIL) {
        rec(T[u].l, p + 1);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int d, v, c, l, r;
    cin >> n;
    for (int i = 0; i < n; i++) {
        T[i].p = T[i].l = T[i].r = NIL;
    }
    for (int i = 0; i < n; i++) {
        cin >> v >> d;
        for (int j = 0; j < d; j++) {
            cin >> c;
            if (j == 0) {
                T[v].l = c;
            } else {
                T[l].r = c;
            }
            l = c;
            T[c].p = v;
        }
    }
    for (int i = 0; i < n; i++) {
        if (T[i].p == NIL) {
            r = i;
        }
    }
    rec(r, 0);
    for (int i = 0; i < n; i++) {
        print(i);
    }
    return 0;
}