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

    int index = 0;
    int sudo_a = a, sudo_b = b;

    long sum;
    while(b > 0){
        index++;
        b /= 10;
    }

    sum = 2 * (sudo_a * pow(10, index) + sudo_b);
    cout << sum << endl;
	return 0;
}