#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void insertionSort(int A[], int N);

int main(){
    int height[10];
	for(int i=0;i<10;i++){
        cin >> height[i];
        }
	insertionSort(height, 10);
	for(int i=9;i>6;i--){
	cout << height[i] << endl;
}
	return 0;
}

void insertionSort(int A[], int N){
    int j, i, v;
    for(i = 1; i < N; i++){
        v = A[i];
        j = i - 1;
    while(j >= 0 && A[j] > v){
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = v;
    }
}