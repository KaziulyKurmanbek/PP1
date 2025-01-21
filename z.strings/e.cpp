#include <iostream>
using namespace std;
int main(){
    string s1 ( "caterpillar");
    int size = s1.size();
    for( int i=0; i<s1.size(); i++){
        ++s1[i];
    }
    cout<<s1;
    return 0;
}