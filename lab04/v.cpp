#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2; i<n; i++){
        bool prime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<i<<" is prime"<<endl;
        }
    }
    return 0;
}