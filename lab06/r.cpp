#include <iostream>
#include <string>
using namespace std;
char sum(char s){
    if(s>='a'&&s<='z'){
        return char(s-32);
    }else{
        return s;
    }
}
int main(){
    char s;
    cin>>s;
    cout<<sum(s);
}