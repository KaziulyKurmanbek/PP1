#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,k,t;
    cin>>n;
    t=ceil(n/16);
    char arr[t];
    int i=0;
    while(n>0){
        k=n%16;
        n/=16;
        if(k==15){
            arr[i]='F';
        }
        if(k==14){
            arr[i]='E';
        }
        if(k==13){
            arr[i]='D';
        }
        if(k==12){
            arr[i]='C';
        }
        if(k==11){
            arr[i]='B';
        }
        if(k==10){
            arr[i]='A';
        }
        if(k==9){
            arr[i]='9';
        }
        if(k==8){
            arr[i]='8';
        }
        if(k==7){
            arr[i]='7';
        }
        if(k==6){
            arr[i]='6';
        }
        if(k==5){
            arr[i]='5';
        }
        if(k==4){
            arr[i]='4';
        }
        if(k==3){
            arr[i]='3';
        }
        if(k==2){
            arr[i]='2';
        }
        if(k==1){
            arr[i]='1';
        }
        i++;
    }
    for(int i=t-1; i>=0; i--){
        cout<<arr[i]<<"";
    }
    return 0;
}