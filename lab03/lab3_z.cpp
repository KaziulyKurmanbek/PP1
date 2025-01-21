#include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int div[n*4];
    for(int i = 0; i<n; i++){
        cin >> array[i];
    }
    for( int i = 0; i<n; i++){
        for( int j = 1; j<n+1; j++){
            if( array[i]%j==0){
                div[j]++;
            }
        }
    }
    for( int i = 0; i < n*4; i++){
     cout<<i<< ":"<<div[i]<< " ";
    }
    return 0;
}