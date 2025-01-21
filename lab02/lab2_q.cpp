#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a,b,c,x,y,z;
    cin >> a >> b >> c;
    x=a+b;
    y=a+c;
    z=c+b;
    if( x<=c || y<=b || z<=a ){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
    }