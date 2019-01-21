#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

void display(int);

int main(){
    int N, hour, minute, second;
    cin >> N;
    second = N % 60;
    minute =  (N / 60) % 60;
    hour = N / 3600;

    display(hour);
    cout << ':';
    display(minute);
    cout << ':';
    display(second);
    cout << endl;
	return 0;
}

void display(int n){
    if(n < 10){
        cout << 0 << n;
    }
    else {
        cout << n;
    }
}