#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    i=0;
    int sum;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
} 