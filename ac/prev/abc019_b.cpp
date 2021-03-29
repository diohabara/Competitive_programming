#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    string s;
    cin >> s;

    string compress_s;
    int cnt_same, i, j;

    for(i = 0; i < s.size();){
        cout << s[i];
        cnt_same = 0;
        j = i;
        while(s[i] == s[j]){
            cnt_same++;
            i++;
        }
        cout << cnt_same;
    }
    cout << endl;
	return 0;
}