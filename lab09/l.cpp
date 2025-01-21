#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(int a) {
    a = abs(a);
    if (a <= 1) return false;    
    if (a == 2) return true;      
    if (a % 2 == 0) return false;
    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) return false;
    }
    return true;
}

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(isPrime(a)){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}