#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int t=1;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if((i+1)!=n && (j+1)!=m){
                sum=arr[i][j]+arr[i+1][j+1]+arr[i+1][j]+arr[i][j+1];
            }
            else{
                sum=1;
            }
            if(sum==0 || sum==4){
                t=0;
                break;
            }
        }
        if(t==0){
            break;
        }
        
    }
    if(t==1){
        cout<<"YES";
    }
    if(t==0){
        cout<<"NO";
    }
    return 0;
}