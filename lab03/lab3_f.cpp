#include <iostream>
#include <iomanip> 
using namespace std;
int main (){
    
    string array[52] = {"A","a", "B","b", "C","c", "D","d", "E","e", "F","f", "G","g", "H","h", "I","i", "J","j", "K","k", "L","l", "M","m", "N","n", "O","o", "P","p", "Q","q", "R","r", "S","s", "T","t", "U","u", "V","v", "W","w", "X","x", "Y","y", "Z","z"};
    
    string n;

    cin >> n;

    for(int i=0; i<52; i++){
        if(array[i]==n){
            if(i%2==0 || i==0){
                cout << array[i+1] << endl;
            }else{
            if(i%2==1){
                cout << array[i-1] << endl;
            }}
        }
    }

    return 0;
}