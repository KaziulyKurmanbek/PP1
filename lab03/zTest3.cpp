#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,i;
    a=2;
    cin>>a;
    i=2;
    while(a%i!=0){
        i++;
    }
    cout<<i<<endl;
    return 0;
}