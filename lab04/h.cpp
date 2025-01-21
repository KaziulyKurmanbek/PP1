#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int array[n];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        array[i]=sum;
    }
    int max=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}