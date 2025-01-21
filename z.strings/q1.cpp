#include <iostream>
using namespace std;
int main(){
    string s1 ( "Hello");
    int size = s1.size(); //не обязательно
    for( int i=0; i<=s1.size(); i++){
        string s2(s1,0,i);
        cout<<s2<<endl;
    }
    return 0;
}