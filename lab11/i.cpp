#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int sum=0;
    while(cin>>n){
        if(n==0) break;
        sum+=n;
    }
    cout<<sum<<endl;
}