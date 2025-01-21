#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int m, e, f, o;
    cin >> m >> e >> f;
    o=m+e+f;
    if(m+e>=30 && f>=20 && o>=70){
        cout<< "YES!"<<endl;
    }
    else{
        cout << "NO."<< endl;
    }
    return 0;
    }