#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    int max=0;
    while(cin>>s){
        if(s.size()>max){
            max=s.size();
        }
    }
    cout<<max<<endl;
    return 0;
}