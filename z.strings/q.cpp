#include <iostream>
using namespace std;
int main(){
    string s1 ( "Hello");
    int size = s1.size(); //не обязательно
    for( int i=1; i<=s1.size(); i++){
        cout<<s1.substr(0,i)<<endl;
    }
    return 0;
}