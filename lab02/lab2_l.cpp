#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a;
    int n,i;
    cin>>a;
    i=0;
    while(a>n){
        i=i+1;
        n=pow(2,i);
       }
 if(pow(2,i)==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
} 