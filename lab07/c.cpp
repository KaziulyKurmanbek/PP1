#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void output(vector<int> s){
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
}

vector<int> func(vector<int> s) {
    vector<int> q;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size() / 2; ++i) {
        q.push_back(s[i] + s[s.size() - i - 1]);
    }
    if(s.size() % 2 == 1) q.push_back(s[s.size() / 2]);
    return q;
}


int main(){
    vector<int> vec;
    int n;
    while(cin>>n){
        if(n==0) break;
        vec.push_back(n);
    }
    output(func(vec));
}