#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

int distance(int n, int A, int B){
    if (n < A){
        return A;
    }
    else if(n > B){
        return B;
    }
    else return n;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    
    int N, A, B;
    cin >> N >> A >> B;

    int d[200];
    string s[200];
    int x = 0;
    for(int i = 0; i < N; i++){
        cin >> s[i] >> d[i];
        if(s[i] == "East"){
            x += distance(d[i], A, B);
        }
        else{
            x -= distance(d[i], A, B);
        }
    }

    if(x < 0){
        cout << "West" << ' ' << abs(x) << endl;
        return 0;
    }
    else if(x == 0){
        cout << 0 << endl;
        return 0;
    }
    else{
        cout << "East" << ' ' << x << endl;
        return 0;
    }
}
