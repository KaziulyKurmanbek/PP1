#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    
    int n;
    
    cin >> n;

    int array[n];

    for(int i = 0; i<n; i++){

        cin >> array[i];

    }

    int max = array[0];

    for(int j = 0; j<n; j++){

        if(array[j]>max){
            max=array[j];
        }

    }

    cout << max << endl;

    return 0;
}