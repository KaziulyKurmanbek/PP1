#include <iostream>
using namespace std;
void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
void reverse(int a[], int n){
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    reverse(arr, n);
    return 0;
}