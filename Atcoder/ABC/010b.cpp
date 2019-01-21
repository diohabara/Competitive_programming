#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

int cut_count(int n){
    int count = 0;
    while(n > 0){
        if(n % 2 == 0){
            count++;
            n--; continue;
        }
        else if (n % 3 == 2){
            count++;
            n--; continue;
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    int n, a[10], sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        sum += cut_count(a[i]);
    }
    cout << sum << endl;
	return 0;
}
