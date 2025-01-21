#include <iostream>
using namespace std;
void input(int a[][9999], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}
void reverse(int a[][9999], int n, int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][9999];
    input(arr, n, m);
    reverse(arr, n, m);
    return 0;
}