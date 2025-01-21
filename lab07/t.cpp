#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool digits(string str){
    for(int i=1; i<str.size(); i++){
        for(int j=i-1; j>=0; j--){
            if(str[i]==str[j] ) return false;
        }
    }
    return true;
}
int main(){
    int number1, number2;
    cin>>number1>>number2;
    string ans;
    for(int i=number1; i<=number2; i++){
        string number=to_string(i);
        if(digits(number)){
            cout<<i;
            return 0;
        }
    }
    cout<<"Understandable, have a great day";
    return 0;
}