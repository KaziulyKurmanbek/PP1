#include <iomanip>
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
int main(){
    int n;
    cin>>n;
    string res = "";
    while(n>0){
        int a;
        a=n%16;
        if(a==10){
            res+="A";
        }
        if(a==11){
            res+="B";
        }
        if(a==12){
            res+="C";
        }
        if(a==13){
            res+="D";
        }
        if(a==14){
            res+="E";
        }
        if(a==15){
            res+="F";
        }else{
            cout<<a;
        }
        n/=16;
    
    }
    cout << res << endl;
    return 0;
    }