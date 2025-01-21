#include <iostream>
#include <algorithm>
using namespace std;
void input(int n, int a[]){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
bool compare(int k/*ID of book*/,int a[], int n ){
    for(int i=0; i<n; i++){
        if(a[i]==k){
            return true;
        }
    }
    return false;
}
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    input(n, arr);
    cin>>k;
    bool res = compare(k, arr, n);
    if(res==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}