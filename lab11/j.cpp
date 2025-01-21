#include <iostream>
#include <vector>
using namespace std;
int sum=0;
int i=0;
int summa(string s, int &sum){
    if(i==s.size()) return sum;
    sum+=(s[i]-'0')/2;
    i++;
    return summa(s, sum);
}
int main(){
    string s;
    cin>>s;
    cout<<summa(s, sum)<<endl;
}