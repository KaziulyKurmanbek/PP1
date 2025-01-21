#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    double t,a;
    cin>>t>>a;
    double c=a/t;
    double k=c*100;
    if(k>=80){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}