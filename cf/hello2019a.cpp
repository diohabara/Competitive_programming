#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    string table;
    string mine;
    cin >> table;
    for (int i = 0; i < 5; i++) {
        cin >> mine;
        for (int j = 0; j < 2; j++) {
            if (table[j] == mine[j]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
	return 0;
}