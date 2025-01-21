#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v_not_sorted;
    vector<int> v_sorted;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b,sum;
        cin>>a>>b;
        sum=a+b;
        v_sorted.push_back(sum);
        v_not_sorted.push_back(sum);
    }
    sort(v_sorted.begin(), v_sorted.end());
    for(int i=0;i<v_not_sorted.size(); i++){
        for(int j=0; j<v_not_sorted.size(); j++){
            if(v_not_sorted[i]==v_sorted[j]){
                cout<<j+1<<" ";
            }
        }
    }
}
