#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    int arr[n*m];
    int k = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>matrix[i][j];
            arr[k]=matrix[i][j];
            k++; 
        }
    }
    sort( arr, arr+n*m);
    int y=1;
    int t = m*n-1;
    int w =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(y%2==1){
                cout<<arr[t]<<" ";
                t--;}
            else{
                cout<<arr[w]<<" ";
                w++;
            }
            y++;
        }
        cout << endl;
    }
    return 0; 
}