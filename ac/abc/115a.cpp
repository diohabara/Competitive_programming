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
    int d;
    cin >> d;
    switch(d){
        case 25: cout << "Christmas" << endl; break;
        case 24: cout << "Christmas Eve" << endl; break;
        case 23: cout << "Christmas Eve Eve" << endl; break;
        case 22: cout << "Christmas Eve Eve Eve" << endl; break;
    }
	return 0;
}