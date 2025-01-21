#include <iostream>
#include <vector>
using namespace std;
bool two(double n){
    if(n/2.0==1.0) return true;
    if(n<1) return false;
    return two(n/2);
}
int main(){
    double n;
    cin>>n;
    if(n==1){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(two(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}