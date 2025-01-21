#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    str2=str1;
    set<string> s;
    set<string> :: iterator it;
    do{
        s.insert(str1);
    }while(prev_permutation(str1.begin(), str1.end()));
    do{
        s.insert(str2);
    }while(prev_permutation(str2.begin(), str2.end()));
    for(it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    return 0;
}