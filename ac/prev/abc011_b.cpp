#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

char uppercase(char a){
    if(a >= 'a' && a <= 'z'){
        return a + ('A' - 'a');
    }
    else{
        return a;
    }
}

char lowercase(char a){
    if(a >= 'A' && a <= 'Z'){
        return a - ('A' - 'a');
    }
    else {
        return a;
    }
}


int main(){
    string S;
    cin >> S;
    S[0] = uppercase(S[0]);
    for(int i = 1; i < S.size(); i++){
        S[i] = lowercase(S[i]);
    }
    cout << S << endl;
	return 0;
}