#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool k = false;
    for (int i=2; i<n/2; i++){
        if(n%i==0 && i!=n){
            cout<<"No";
            k = true;
            break;}
    }
    if (!k){
        cout<<"Yes";
    }
    return 0;
}
