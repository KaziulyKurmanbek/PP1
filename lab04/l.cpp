#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ind[n];
    for(int i=0; i<n;i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
        ind[i]=sum;
    }
    int min=ind[0];
    int l=1;
    for(int i=0; i<n; i++){
        if(ind[i]<min){
            min=ind[i];
        }
    }
    for(int i=0; i<n; i++){
        if(ind[i]==min){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}