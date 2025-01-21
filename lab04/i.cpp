#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = '.';
        }
    }
    if(n%2==0){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            arr[i][j] = '#';
        }
    }}
    if(n%2==1){
        for(int i=0; i<n; i++){
        for(int j=n-1; j>=(n-i-1); j--){
            arr[i][j]='#';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
