#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;

    cin >> n;

    int array[n];

    for ( int i = 0; i < n; i++){

        cin >> array[i];

    }

    for( int j =0; j < n; j++){
        if ( array[j] != array[j-1]){
            cout << array[j] << " " ;
        }
    }

    return 0;
}