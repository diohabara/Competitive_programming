#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

int main(){
    int a, b, sum, digit;
    while(scanf("%d %d", &a, &b) != EOF){
        sum = a+b;
        digit = 0;
        while(sum > 0){
            sum /= 10;
            digit++;
        }
        cout << digit << endl;
    }
    return 0;
}
