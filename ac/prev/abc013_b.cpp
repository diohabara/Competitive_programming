#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int a, b;
    cin >> a >> b;

    int min_touch;
    if(a > b){
        min_touch = min(a - b, b + 10 - a);
    }
    else{
        min_touch = min(b - a, a + 10 - b);
    }
    cout << min_touch << endl;
	return 0;
}