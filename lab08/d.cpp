#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n, search;
    cin>>n>>search;
    int sum=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a==search) sum++;
    }
    cout<<sum;
}