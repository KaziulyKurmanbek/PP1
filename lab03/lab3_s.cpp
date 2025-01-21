#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    float n ;
    cin >> n;
    int m;
    m = sqrt(n)*1000000;
    if( m%1000000==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}