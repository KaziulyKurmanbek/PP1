#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void out(int i){
    cout<<i<<" ";
}

void out1(vector<int> v){
    for_each(v.begin(), v.end(), out);
    cout<<endl;
}

int sum(vector<int> v){
    int sum=0;
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    return sum;
}

bool cmp(vector<int> v1, vector<int> v2){
    int sum1=sum(v1);
    int sum2=sum(v2);

    //cout << sum1 << ' ' << sum2 << endl;

    if(sum1!=sum2){
        return sum1<sum2;
    }else{
        if(v1.size()!=v2.size()){
            return v1.size()<v2.size();
        }else{
            for(int i=0; i<v1.size(); i++){
                if(v1[i]<v2[i]){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > v(n);
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        for(int j=0; j<a;j++){
            int element;
            cin>>element;
            v[i].push_back(element);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for_each(v.begin(), v.end(), out1);

    // cout << cmp(v[1], v[3]) << endl;
}