#include <iostream>
#include <vector>
using namespace std;
int ma=0;
int i=0;
int maxi(string s, int &max){
    if(i==s.size()) return max;
    if(s[i]>max) max=s[i];
    i++;
    return maxi(s, max);
}
int main(){
    string s;
    cin>>s;
    cout<<maxi(s,ma)-'0'<<endl;
}