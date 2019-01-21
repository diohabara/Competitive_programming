#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y);
int main(){
    int x, y;
    cin >> x >> y;
    x = gcd(x, y);
    cout << x << endl;
}

int gcd(int x, int y){
    int r;
    if(x < y) swap(x, y);
    while(y > 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}