#include <iostream>
using namespace std;
long long po(int n){
    if(n==0) return 1;
    return 2*po(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<po(n)<<endl;
    return 0;
}