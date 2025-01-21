#include <iostream>
using namespace std;
int main() {
    int m,k,j,l,r,t,y,u,n;
    cin>>n;
    cin>>m;
    k=m%1000;
    l=m%100;
    r=k-l;
    j=r/100;
    t=m%10;
    y=j+t;
    cout<<y+n<<endl;
    return 0;
}