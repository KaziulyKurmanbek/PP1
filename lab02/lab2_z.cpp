#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,r,d;
    cin>>r>>a;
    d=2*r;
    if(a>d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}