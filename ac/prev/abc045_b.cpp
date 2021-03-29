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
    string a, b, c;
    cin >> a >> b >> c;
    int cntA = 0, cntB = 0, cntC = 0;
    int index = a[0];
    cntA++;
    while(true) {
        switch(index) {
            case 'a':
                if (cntA == a.size()){
                    cout << 'A' << endl;
                    return 0;
                }
                cntA++;
                index = a[cntA]; break;
            case 'b':
                if (cntB == b.size()) {
                    cout << 'B' << endl;
                    return 0;
                }
                cntB++;
                index = b[cntB]; break;
            default :
                if (cntC == c.size()) {
                    cout << 'C' << endl;
                    return 0;
                }
                cntC++;
                index = c[cntC]; break;
            }
    }
    return 0;
}