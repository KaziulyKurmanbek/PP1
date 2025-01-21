#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main(){
long a;
cin>>a;
bitset<9> number(a);
bitset<9> invert=~number;
cout<<invert.to_ulong();
return 0;
}