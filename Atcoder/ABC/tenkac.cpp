#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;
vector<int> G;
// 間隔Gを指定した挿入ソート
void insertionSort(int A[], int n, int g){
    for(int i = g; i < n; i++){
        int v = A[i];
        int j = i - g;
        while( j >= 0 && A[j] > v){
            A[j + g] = A[j];
            j -= g;
            cnt++;
        }
        A[j + g] = v;
    }
}

void shellSort(int A[], int n){
    // 数列G = {1, 4, 13, 40, 121, 364, 1093, ...}を生成
    for (int h = 1; ; ){
        if(h > n) break;
        G.push_back(h);
        h = 3 * h + 1;
    }

    for(int i = G.size() -  1; i >= 0; i--){ // 逆順にG[i] = gを指定
        insertionSort(A, n, G[i]);
    }
}

int main(){
    int N, A[MAX], i;
    // input
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    // 配列をソート
    shellSort(A, N);
    

    int sum = 0;
    // 計算はN-1回する
    if(N % 2 == 0){  // Nは偶数


    }
    else{  // Nは奇数
        if((N - 1) % 4 == 0){  // N-1が4の倍数
        for(i = 0; i <= (N - 1) / 4 ; i++){
            sum += 2 * A[i];
            sum -= A[(N - 1) / 2 + i];
        }
        for(int i = 0; i < (N - 1) / 4; i++){
            sum -= 2 * A[N - i];
            sum += A[(N - 1) / 2 - i];
        }       
        } else {
             if((N - 1) % 4 == 0){  // N-1が4の倍数
                for(i = 0; i <= (N - 1) / 4 ; i++){
                sum += 2 * A[i];
                sum -= A[(N - 1) / 2 + i];
        }       
        for(int i = 0; i < (N - 1) / 4; i++){
            sum -= 2 * A[N - i];
            sum += A[(N - 1) / 2 - i];
        }
    }
	return 0;
}