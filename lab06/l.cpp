#include <iostream>
using namespace std;
int sum1=0;
void res(string a, int n){
    int max=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]>='0'&& a[i]<='9'){
            sum1++;
        }else{
            if(sum1>=max){
                max=sum1;
            }
            sum1=0;
        }
    }
    if(max>=n){
        cout<<"Valid";
    }else{
        cout<<"Not valid";
    }
}
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    res(s, n);
}