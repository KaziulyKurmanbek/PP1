#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n,l;

    cin >> n >> l;

    int array[n];

    for( int i = 0; i<n; i++){
        cin >> array[i];
    }


    for( int i = 0; i<n - 1; i++){

        if(array[i]==l){
            cout << i <<endl;
            return 0;
        }

        else{
           
            if(array[i]<l && array[i+1]>l){
                cout << i+1 << endl;
                return 0;
            }

        }
    }
    cout << n << endl;
    return 0;
}