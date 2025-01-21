#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string str;
    cin>>str;
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(), str.end()));
    return 0;
}