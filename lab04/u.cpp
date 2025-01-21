#include <iostream>
#include <iomanip>
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
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==j || i==n-1 || j==n-1 || i+j==n-1){
                cout<<"*"<<" ";
            }else{
                cout<<arr[i][j]<<" ";
                sum+=arr[i][j];
            }
        }
        cout<<endl;
    }
    cout<<sum;
    return 0;
}