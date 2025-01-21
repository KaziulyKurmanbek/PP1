#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> odd;
    vector<int> even;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a%2==0) even.push_back(a);
        if(a%2==1) odd.push_back(a);
    }
    int sum=0, min=0;
    for(int i=0; i<even.size(); i++){
        if(even[i]<min){
            min=even[i];
        }
    }
    for(int i=0; i<odd.size(); i++){
        sum+=odd[i]*odd[i];
    }
    if(even.size()==0){
        cout<<"-1"<<endl;
    }else{
        cout<<min<<endl;
    }
    cout<<sum<<endl;
    return 0;
}