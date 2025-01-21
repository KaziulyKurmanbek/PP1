#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for ( int i=0; i<n; i++){
        cin >> array[i];
    }
    int m;
    cin >> m;
    for ( int j =0; j<n; j++){
        cout << array[(j-m+n)%n]<< " "; 
    }
    return 0;
}
