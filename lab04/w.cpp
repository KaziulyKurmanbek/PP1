#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            if(j+i==n-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}