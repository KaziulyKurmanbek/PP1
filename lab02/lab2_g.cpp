#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n , k , i;
    cin>>n>>k;
    if(n>k){
    i=2*n;
    int time= ceil(static_cast<double>(i)/k);
    cout<<time<<endl;
    } 
    else{
        int time=ceil(static_cast<double>(k)/n);
        cout<<time<<endl;
    }
 return 0;
}