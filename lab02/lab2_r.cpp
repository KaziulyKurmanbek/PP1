#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a,b;
    cin>>a;
    b=~a;
    bitset<8> bits2 (b);
    unsigned long demical_value = bits2.to_ulong();
    cout<<demical_value<<endl;
    return 0;
    }