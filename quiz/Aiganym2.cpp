#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int second(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<second(n)<<endl;
}