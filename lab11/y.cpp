#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int gcd(int n, int m, int i){ //n>m
    if(n%i==0 && m%i==0) return i;
    i--;
    return gcd(n, m, i);
}
int main(){
    int m,n,i;
    cin>>n>>m;
    if(n>m){
        i=n;
        cout<<gcd(n,m,i)<<endl;
    }else{
        i=m;
        cout<<gcd(m,n,i)<<endl;
    }
    return 0;
}