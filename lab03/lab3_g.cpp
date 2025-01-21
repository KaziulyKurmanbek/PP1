#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    int n;

    cin >> n;
    
    long array[n];

    for(int i = 0; i<n; i++ ){
        cin >> array[i];
    }
    
    long sum=0;

    for(int j=0; j<n; j++){
        sum+=array[j];
    }
    
    cout << sum << endl;
    return 0;
}