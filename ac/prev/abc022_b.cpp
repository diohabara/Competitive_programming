#include<iostream>
using namespace std;

int main(void){
int flower[100001],n,dumy,count=0;
cin >> n;
// put all flower into list
for(int i=0;i<100001;i++){
    flower[i]=0;
}

// input flower data into dumy
for(int i=0;i<n;i++){
    cin>>dumy;
    flower[dumy]++;
}

// if flower data is bigger than one plus count one
for(int i=1;i<100001;i++){
    if(flower[i]>1) count += flower[i] - 1;
}

cout<<count<<endl;
return 0;
}
