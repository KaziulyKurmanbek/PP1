#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int num=1;
    int start=0;
    int end=n-1;
    int len;
    len=n*n;
    while( num<=len){
        for(int i=start; i<=end;i++){
            arr[start][i]=num;
            num++;
        }

        for(int i=start+1; i<=end;i++){
            arr[i][end]=num;
            num++;
        }

        for(int i=end-1; i>=start; i--){
            arr[end][i]=num;
            num++;
        }

        for(int i=end-1; i>start; i--){
            arr[i][start]=num;
            num++;
        }
        ++start;
        --end;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}