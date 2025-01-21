#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int t,s;
    int sum=0;
    cin >> t;
    int arr[t][4];
    for(int i = 0; i<t;i++){
        for(int j = 0; j<4;j++){
            cin>>arr[i][j];
        }
    }
    for( int i=0; i<t; i++){
        s=abs(arr[i][2]-arr[i][0])*abs(arr[i][3]-arr[i][1]);
        sum+=s;
    }
    
    cout<<a*b-sum<<endl;
    return 0; 
}