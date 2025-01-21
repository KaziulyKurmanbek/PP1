#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m=n*2-1;
    char arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = '.';
        }
    }
    for(int i = 0; i < n; i++){
        int k;
        k=m/2;
        for(int j = k-i; j <= k+i; j++){
            arr[i][j]='*';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}