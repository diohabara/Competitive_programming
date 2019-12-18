#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int sizeA = a.size(), sizeB = b.size();
    if (sizeA > sizeB) cout << "GREATER" << endl;
    if (sizeA < sizeB) cout << "LESS" << endl;
    if (sizeA == sizeB) {
        for (int i = 0; i < sizeA; i++) {
            if (a[i] > b[i]){
                cout << "GREATER" << endl;
                return 0;
            } else if (b[i] > a[i]) {
                cout << "LESS" << endl;
                return 0;
            } else {
                cout << "EQUAL" << endl;
                return 0;
            }
        }
    }
	return 0;
}