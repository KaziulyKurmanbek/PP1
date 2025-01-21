#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isEven(int i){
    return i%2==0;
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    while(n>0){

        int x;
        cin>>x;
        v.push_back(x);

        --n;
    }
    cout<<count_if(v.begin(), v.end(), isEven);
    return 0;
}