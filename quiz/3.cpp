#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int rost;
    cin>>rost;
    for(int i=0; i<n; i++){
        if(arr[i]<rost){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<n+1;
    return 0; 
}