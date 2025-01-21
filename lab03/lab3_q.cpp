#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    int arr[n];
    for ( int i = 0; i<n; i++){
        cin >> array[i];
        arr[i]=array[i]*array[i];
    }
    for (int j =0; j<n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}