#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

void bubbleSort(int A[], int N){
    bool flag = 1;
    for(int i = 0; flag; i++){
        flag = 0;
        for(int j = N - 1; j >= i + 1; j--){
            if(A[j] < A[j - 1]){
                //隣接要素を交換する
                swap(A[j], A[j - 1]);
                flag = 1;
            }
        }
    }
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int N, R[2000];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> R[i];
    }

    bubbleSort(R, N);
    
    double sum = 0;
    for(int i = 0; i < N; i++){
        if(N % 2 == 1){
            if(i % 2 == 0){
                sum += pow(R[i], 2);
            } else {
                sum -= pow(R[i], 2);
            }
        }
        else{
            if(i % 2 == 1){
                sum += pow(R[i], 2);
            } else {
                sum -= pow(R[i], 2);
            }
        }
    }

    printf("%f\n", sum * M_PI);

	return 0;
}