#include "bits/stdc++.h"
using namespace std;
int n, m;
vector<int> p;
int main()
{
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int& c : graph[0]) {
        for (int& p : graph[c]) {
            if (p == n - 1) {
                puts("POSSIBLE");
                return 0;
            }
        }
    }
    puts("IMPOSSIBLE");
    return 0;
}
