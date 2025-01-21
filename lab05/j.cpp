#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin>>s;
    char max=s[0];
    for(int i=0; i<s.size(); i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    cout<<max;
    return 0;
}
