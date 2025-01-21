#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
struct translate{
    string word;
    string trs;
};
int main(){
    int n;
    cin>>n;
    vector<translate> v;
    for(int i=0; i<n;i++){
        string word, trs;
        cin>>word>>trs;
        translate ran;
        ran.word=word;
        ran.trs=trs;
        v.push_back(ran);
    }
    string s;
    cin>>s;
    for(int i=0; i<v.size(); i++){
        if(v[i].word!=s){
            cout<<v[i].word<<" "<<v[i].trs<<endl;
        }
    }
}