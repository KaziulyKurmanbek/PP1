#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=0 && i!=0){
            if(j==i){
                arr[i][j]=j*i;
            }
            else{
                arr[i][j]=0;
            }}
            arr[0][j]=j;
            arr[i][0]=i;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}