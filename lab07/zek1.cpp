#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        char w=s[i];
        int sum=0;
        for(int j =0; j<s.size(); j++){
            if(s[j]==w){
                sum++;
            }
        }
        bool b=true;
        for(int k=i-1; k>=0; --k){
            if(s[k]==w){
                b=false;
                break;
            }
        }
        if(b==true){
            cout<<w<<" "<<sum<<endl;
        }else{
            continue;
        }
    }
}