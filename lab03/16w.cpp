#include <iomanip>
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int a;
        a=n%16;
        if(a==10){
            cout<<"A";
        }
        if(a==11){
            cout<<"B";
        }
        if(a==12){
            cout<<"C";
        }
        if(a==13){
            cout<<"D";
        }
        if(a==14){
            cout<<"E";
        }
        if(a==15){
            cout<<"A";
        }
        else{
            cout<<a;
        }
        n/=16;
    }
    return 0;}