#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hep(long a, long b){
    return sqrt(a*a+b*b);
}
int main(){
    long a,b;
    cin>>a>>b;
    cout<<setprecision(4)<<hep(a,b);
}