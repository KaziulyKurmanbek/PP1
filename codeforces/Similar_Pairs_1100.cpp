#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int h; 
        cin>>h;
        vector<int> arr;
        for(int j=0; j<h;j++){
            int q;
            cin>>q;
            arr.push_back(q);
        }
        sort(arr.begin(), arr.end());
        bool cool=true;;
        for(int j=0; j<arr.size(); j++){
            if(arr[i]%2==arr[i+1]%2 || arr[i+1]-arr[i]==1){
                j++;
            }else{
                cool=false;
            }
        }
        if(cool){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}