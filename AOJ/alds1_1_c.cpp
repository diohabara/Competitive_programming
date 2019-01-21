#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int x);

int main(){
    int n;
    cin >> n;
    int number[10000];
    for(int i = 0; i < n; i++){
        cin >> number[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(is_prime(number[i])) cnt++;
    }
    cout << cnt << endl;
}

bool is_prime(int x){
    if (x == 2){
        return true;
    }
    else if(x < 2 || x % 2 == 0){
        return false;
    }
    int i = 3;
    while(i <= pow(x, 0.5)){
        if(x % i == 0){
            return false;
        }
        i += 2;
    }   
    return true;
}