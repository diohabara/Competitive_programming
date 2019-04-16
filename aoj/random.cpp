#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1,0,-1,0},dx[4] = {0,1,0,-1};
typedef pair<ll, ll> P;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    srand((unsigned int)time(NULL));
    cout << rand() % 26 - 'a' + 'a' << endl;
    return 0;
}