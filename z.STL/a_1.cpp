#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> v;

    cout<<v.empty()<<endl;
    cout<<v.size()<<endl;

    v.push_back(1);

    cout<<v.empty()<<endl;
    cout<<v.size()<<endl;
}