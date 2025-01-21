#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(5,0);
    if(n>36){
        v[4]+=(n/60);
        n%=60; 
    }
    if(n>19){
        v[3]+=(n/20);
        n%=20;
    }
    if(n>8){
        v[2]+=(n/10);
        n%=10;
    }
    if(n>4){
        v[1]+=(n/5);
        n%=5;
    }
    v[0]=n;
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}