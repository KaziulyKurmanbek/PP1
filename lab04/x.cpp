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
    int max1=arr[0][0];
    int max2=arr[0][1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>max1){
                max1=arr[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>max2 && arr[i][j]<max1){
                max2=arr[i][j];
            }
            if(max1==max2){
                max2=0;
            }
        }
    }
    cout<<max2;
    return 0;
}