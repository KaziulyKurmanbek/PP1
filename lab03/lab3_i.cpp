#include <iostream>
using namespace std;
int main(){

    int n;

    cin >> n;

    int array[n];

    for ( int i = 0; i < n; i++){

        cin >> array[i] ;

    }

    int max = array[0];
    int min = array[0];

     for ( int k = 0; k < n; k++){

        if ( array[k] < min ){
            min = array[k];
        }

    }


    for ( int j = 0; j < n; j++){

        if ( array[j] > max ){

            max = array[j];

        }

    }

    for ( int l = 0; l < n; l++){
        if(array[l]==max){
            array[l] = min;
        }
        cout << array[l] << " ";
    }

    return 0;
}