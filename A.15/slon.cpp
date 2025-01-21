#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int q=x-a;
    int w=y-b;
    if(abs(q)==abs(w)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}