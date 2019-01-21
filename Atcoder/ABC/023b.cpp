#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int n; cin >> n;
    string s; cin >> s;

    int i;

    if(n % 2 == 0){
        cout << -1 << endl;
        return 0;
    }

    if(n % 3 == 0){
        for(i = 0; i < n / 3;i++){
            if(s[3 * i] != 'a' || s[3 * i + 1] != 'b' || s[3 * i + 2] != 'c'){
                cout << -1 << endl;
                return 0;
            } 
        }
    }

    else if(n % 3 == 1){
        for(i = 0; i < n / 3;i++){
            if(s[3 * i] != 'b' || s[3 * i + 1] != 'c' || s[3 * i + 2] != 'a'){
                cout << -1 << endl;
                return 0;
            } 
            if(s[n - 1] != 'b'){
                cout << " jiko " << endl; 
                cout << -1 << endl;
                return 0;
            }
        }
    }

    else if(n % 3 == 2){
        for(i = 0; i < n / 3;i++){
            if(s[3 * i] != 'c' || s[3 * i + 1] != 'a' || s[3 * i + 2] != 'b'){
                cout << -1 << endl;
                return 0;
            } 
            if(s[n - 2] != 'c' || s[n - 1] != 'a'){
                // cout << " jiko " << endl; 
                cout << -1 << endl;
                return 0;
            }
        }
    }


    int length = (n - 1) / 2; 

    cout << length << endl;
	return 0;
}