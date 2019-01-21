#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;
void divide_x(int x, int y);
void divide_y(int x, int y);

int main(){
    int A, B, K;

    // input 
    cin >> A >> B >> K;

    if(K % 2 == 0){  // Kが偶数の時K/2回ずつ交換を行う
        for(int i = 0; i < K / 2; i++){
            divide_x(A, B);
            divide_y(A, B);
        }
    }
    else{  // Kが偶数の時K/2 + 1回ずつ交換を行う
        for(int i = 0; i < K / 2; i++){
            divide_x(A, B);
            divide_y(A, B);
    }
        divide_x(A, B);
    }

    // output 
    cout << A << ' ' << B << endl;
	return 0;
}

// xを2で割った商にし，その商をyに足す
void divide_x(int x, int y){ 
    x /= 2;
    y += x;
    cout << x << ' ' << y << endl;
}

// xをyで割った商にし，その商をxに足す
void divide_y(int x, int y){
    y /= 2;
    x += y; 
    cout << x << ' ' << y << endl;
}