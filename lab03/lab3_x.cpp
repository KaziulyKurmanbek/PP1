#include <iostream> 
using namespace std;
int main(){
    int n,x=0;
    cin >> n;
    int array[n];
    for(int i = 0; i<n; i++){
        cin >> array[i];
    }    
    for(int j = 0; j<n; j++){
        if(array[j]%10==7){
            x+=1;
        }
    }
    cout << x;
    return 0;
}