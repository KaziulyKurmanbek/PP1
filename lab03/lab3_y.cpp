#include <iostream> 
using namespace std;
int main(){
    int n,x=0;
    cin >> n;
    int array[n];
    for(int i = 0; i<n; i++){
        cin >> array[i];
    } 
    for(int i = 0; i<n; i++){
        if(array[i]>=100000 && array[i]%100000<10000){
            x++;
        }
        if(array[i]>=10000 && array[i]%10000<1000){
            x++;
        }
        if(array[i]>=1000 && array[i]%1000<100){
            x++;
        }
        if(array[i]>=100 && array[i]%100<10){
            x++;
        }
        if(array[i]>=10 && array[i]%10==0){
            x++;
        }
    } 
    cout << x;
    return 0;
}