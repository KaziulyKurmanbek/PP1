#include <iostream>
using namespace std;
int main(){
    int a, a1,a2,a3,a4;
    cin>>a;

    a4=a%10;
    a/=10;

    a3=a%10;
    a/=10;

    a2=a%10;
    a/=10;

    a1=a%10;
    a/=10;

    printf("%.2i\n", a1);
    return 0;
}