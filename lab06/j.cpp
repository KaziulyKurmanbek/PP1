#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void input(int a[]){
    for(int i=0 ;i<4; i++){
        cin>>a[i];
    }
}
void sol(int a[], int min){
    for(int i=0; i<4; i++){
        if(a[i]>min){
            min=a[i];
        }
    }
    a[0]=min;    
}
int main(){
    int arr[4];
    input(arr);
    sol(arr, arr[0]);
    cout<<arr[0];
}