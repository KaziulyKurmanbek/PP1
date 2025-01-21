#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    float n ;
    cin >> n;
    int m=n/sqrt(n);
    if( m==sqrt(n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}