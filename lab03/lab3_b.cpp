#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    int n;

    cin >> n;

    int array[n];

    int number=0;

    for( int i = 0; i < n; i++){
        cin >> array[i];
        if(array[i]>0){
            number+=1;
        }
    }

    cout << number << endl;

    return 0;
}