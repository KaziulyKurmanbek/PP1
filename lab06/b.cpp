#include <iostream>
using namespace std;

void compare(int n, int a[], int b[]){
    for(int i=0; i<n; i++){
        cout<<abs(a[i]-b[i])<<" ";
    }
}
void input(int n, int a[]){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    input(n, A);
    input(n, B);
    compare(n, A, B);
}