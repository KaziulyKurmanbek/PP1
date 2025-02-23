#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int sum(vector<int>v){
    int sum=0;
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    return sum;
}

bool cmp(vector<int> v1, vector<int>v2){
    int sum1=sum(v1);
    int sum2=sum(v2);
    if(sum1!=sum2){
        return sum1<sum2;
    }else{
        if(v1.size()!=v2.size()){
            return v1.size()<v2.size();
        }else{
            for(int i=0; i<v1.size(); i++){
                if(v1[i]!=v2[i]){
                    return v1[i]<v2[i];
                }
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > v(n);
    for(int i=0;i<n; i++){
        int m;
        cin>>m;
        vector <int> v_jr(m);
        for(int j=0; j<m; j++){
            cin>>v_jr[i];
        }
        v[i]=v_jr;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}