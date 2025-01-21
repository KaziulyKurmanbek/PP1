#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum_num=0;
    int qua_num=0;
    int qua_let=0;
    for(int i=0; i<s.size(); ++i){
        if(s[i]>='A' && s[i]<='Z'){
            qua_let++;
        }
        if(s[i]>='a' && s[i]<='z'){
            qua_let++;
        }
        if(s[i]>='0' && s[i]<='9'){
            qua_num++;
            sum_num+=(s[i]-'0');
        }
    }
    cout<<sum_num<<" "<<s.size()-(qua_num+qua_let)<<endl;
    return 0;
}