#include <iostream>
using namespace std;
int main() {
    int n,i,d;
    i=1;
    i=i+1;
    cin>>n>>d;
    int sum = n;
    while (i<=d)
    {
    sum=sum+(2*i*n);
    i=i+1;
    }
    cout<<sum<<endl;
    return 0;
}