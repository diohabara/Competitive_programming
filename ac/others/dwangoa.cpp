#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int N;
    int a[200];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    double ave = 0;
    for(int i = 0; i < N; i++){
        ave += a[i];
    }
    ave /= N;

    int frame= N - 1;
    double min = abs(ave - a[N - 1]);
    for(int i = N - 1; i >= 0; i--){
        if(abs(ave - a[i]) <= min){
            min = abs(ave - a[i]);
            frame = i;
        }
    }
    cout << frame << endl;
	return 0;
}