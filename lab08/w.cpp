#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime=true;
    if(n!=1){
        for(int i=2; i<sqrt(n); i++){
            if(n%i==0){
                prime=false;
                break;
            }
        }
        if(!prime){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }else{
        cout<<"NO\n";
    }
    
}