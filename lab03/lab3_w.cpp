#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string b="";
    while(n>0){
        int a;
        a = n%16;
        if(a<10){
            b+=a;
        }else{
            if(a==10){
                b+="A";
            }if(a==11){
                b+="B";
            }if(a==12){
                b+="C";
            }if(a==13){
                b+="D";
            }if(a==14){
                b+="E";
            }if(a==15){
                b+="F";
            }
        }
        n=n/16;
    }
    
    reverse(b.begin(), b.end());
    if (b.empty()) {
        b = "0";
    }
    cout << b << endl;

    return 0;
}