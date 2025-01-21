#include<iomanip>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int index=0;
    while((n&1)==0){
        n>>=1;
        index++;
    }
    cout<<index<<endl;
    return 0;
}