#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    cout<<"coordinates of min elements: "<<endl;
    for(int i=0; i<m; i++){
        int min=arr[0][i];
        int x,y;
        x=0+1;
        y=i+1;
        for(int j=0; j<n; j++){
            if(arr[j][i]<min){
                min=arr[j][i];
                x=j+1;
                y=i+1;
            }
        }
        sum+=min;
        cout<<x<<";"<<y<<endl;
    }
    cout<<endl;
    cout<<"Their sum:"<<endl;
    cout<<sum<<endl;

    return 0;
}