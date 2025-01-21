#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;
    char letter;
    cin>>letter;
    int let=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==letter){
            let++;
        }
    }
    int arr[let];
    int j=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==letter){
            arr[j]=i;
            j++;
        }
    }
    if(let==1){
        cout<<arr[0];
    }else{
        cout<<arr[0]<<" "<<arr[let-1];
    }
    return 0;
}