#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while( (i*i)<=n ){
        cout<<(i*i)<<endl;;
        i++;
    }
    return 0;
}