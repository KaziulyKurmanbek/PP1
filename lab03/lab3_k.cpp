#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n,l,r;

    cin >> n >> l >> r;

    int array[n];

    for( int i = 0; i<n; ++i){
        cin >> array[i];
    }
    reverse(array + l - 1, array + r);
    for( int i = 0; i<n; ++i){
        cout << array[i] << " ";
    }
    return 0;
}