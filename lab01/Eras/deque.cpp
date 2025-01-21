#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    deque<int> dq;
    int a;
    while(cin>>a){
        dq.push_back(a);
    }
    cout<<dq.front()<<endl;
    dq.pop_front();
    cout<<dq.back()<<endl;
}