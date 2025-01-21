#include <iostream>
#include <algorithm>
using namespace std;
int sum0=0;
void input (int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
int compare(int a[], int n, int b[]){
    sort(a, a+n);
    sort(b, b+n);
    int i=0, j=0;
    while(i<n && j<n){
        if(a[i]==b[j]){
            sum0++;
            i++;
            j++;
        }
        if(a[i]>b[j]){
            j++;
        }
        if(a[i]<b[j]){
            i++;
        }
    }
    return sum0;
}
int main(){
    int n;
    cin>>n;
    int arrA[n];
    int arrB[n];
    input(arrA, n);
    input(arrB, n);
    compare(arrA, n, arrB);
    cout<<sum0;
}