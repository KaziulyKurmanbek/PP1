#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> odd;
    vector<int> even;
    for(int i=0; i<n; i++){
        int s;
        cin>>s;
        if(s%2==0) even.push_back(s);
        if(s%2==1) odd.push_back(s);
    }
    sort(even.begin(),even.end());
    reverse(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    for(int i=0;i<n;i++){
        cout<<even[i]<<" ";

    }
    for(int i=0;i<n;i++){
        cout<<odd[i]<<" ";
    }
    return 0;
}