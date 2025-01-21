#include <iostream>
#include <string>
using namespace std;
int average(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum/n;
}
void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    input(arr, n);
    cout<<abs(average(arr, n)-k);
}