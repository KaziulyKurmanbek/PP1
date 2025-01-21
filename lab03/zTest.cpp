#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b;
    cin>>a>>b;
    int i = 1;
    while( a<b ){
        a=a*1.1;
        i++;
    }
    cout<<i<<endl;
    return 0;
}