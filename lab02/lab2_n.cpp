#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a,q,w,e,r,t,y,u,i,o,p;
    cin>>a;
    w=a-(a%1000);
    q=w/1000;
    e=a-(a%100)-w;
    r=e/10;
    t=a-(a%10)-w-e;
    y=t*10;
    u=a-(w+e+t);
    i=u*1000;
    o=q+r+y+i;
    if (o==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
} 