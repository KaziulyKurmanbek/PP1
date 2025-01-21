#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int q=abs(x-a);
    int w=abs(y-b);
    if(x==a || y==b){
        cout<<"YES"<<endl;
        return 0;
    }
    if(abs(q)==abs(w)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}