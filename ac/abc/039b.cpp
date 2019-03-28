#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int x;
    cin >> x;
    int n = 1;
    while(true){
        if (n * n * n * n == x) {
            cout << n << endl;
            return 0;
        }
        n++;
    }
}