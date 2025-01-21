#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    deque<int> dq;
    bool back = true;
    for(int i=0; i<n; i++){
        int a,q;
        cin>>a;
        if(a==1){
            cin>>q;
            if(back) dq.push_back(q);
            else dq.push_front(q);
        }else{
            back = !back;
        }
    }

    if(back){
        for(int i=0; i<dq.size(); i++){
            cout<<dq[i]<<" ";
        }
    }else{
        for(int i=dq.size()-1; i>=0; i--){
            cout<<dq[i]<<" ";
        }
    }
}