#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    
    int n;
    
    cin >> n;

    int array[n];

    int index = 0;

    for(int i = 0; i<n; i++){

        cin >> array[i];

    }

    int max = array[0];

    for(int j = 0; j<n; j++){

        if(array[j]>max){
            max = array[j];
            index = j;
        }

    }

    cout << index+1 << endl;

    return 0;
}