#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    int t;
    cin>>t;

    for(int i = 0; i<a; i++){  
        for(int j = 0; j<b; j++){
            arr[i][j]=0;
        }}

    for(int k=1; k<=t; k++){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i = y1; i<y2; i++){
            for(int j = x1; j<x2; j++){
                arr[i][j]=1;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cout << arr[i][j] << " ";
            sum+=arr[i][j];
        }
        cout << endl;
        }
    cout<<a*b-sum<<endl;
    return 0; 
}