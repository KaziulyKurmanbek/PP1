#include <iostream>
#include <cmath>
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
    int max=arr[0][0];
    int x,y;
    x=1;
    y=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                x=i+1;
                y=j+1;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}