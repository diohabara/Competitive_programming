#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

int main(){
    int n, X;
    int a[20];

    cin >> n >> X;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0, index = 0;
    while(X > 0){
        if(X % 2 == 1){
            sum += a[index];
        }
        X /= 2;
        index++;
    }

    cout << sum << endl;
	return 0;
}