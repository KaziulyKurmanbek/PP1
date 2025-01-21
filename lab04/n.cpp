#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int index=1;
    int max=arr[0][0];
    for(int i=0; i<n; i++){
        if(arr[i][i]>max){
            max=arr[i][i];
            index=1+i;
        }
    }
    cout<<"Maximum element is: "<<max<<" with coordinates: "<<index<<";"<<index<<endl;
    return 0;
}