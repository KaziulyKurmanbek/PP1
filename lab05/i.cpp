#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    int sum=0;
    for(int i=0; i<str.size(); i++){
        sum+=str[i];
    } 
    if(sum>300){
        cout<<"It is tasty!";
    }
    else{
        cout<<"Oh, no!";
    }
    return 0;
}
