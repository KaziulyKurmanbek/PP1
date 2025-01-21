#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int fib(int n, int m){
     if (m == 1) return 0;
    if (m == 2) return 1; 
    return fib(n, m-1)+n*fib(n, m-2);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<fib(n,m)<<endl;
}