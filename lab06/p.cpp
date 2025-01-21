#include <iostream>
#include <string>
using namespace std;
void sum(int n){
    if(n<0){
        cout<<(-1)*n;
    }else{
        cout<<n;
    }
}
int main(){
    int s;
    cin>>s;
    sum(s);
}