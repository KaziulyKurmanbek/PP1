#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n; 
    vector <int> prices;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        prices.push_back(a);
    }
    vector <int> v;
    for(int i=0; i<n; i++){
        bool have_smaller=false;
        for(int j=i+1; j<n; j++){
            if(prices[i]>=prices[j]){
                v.push_back(prices[i]-prices[j]);
                have_smaller=true;
                break;
            }
        }
        if(!have_smaller){
            v.push_back(prices[i]);
        }
    }
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}