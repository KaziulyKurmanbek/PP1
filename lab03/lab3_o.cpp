#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s, word = "";
    getline(cin, s);
    stringstream ss(s);
    int sum = 0;
    while(ss >> word){
        int x = stoi(word);
        sum += x;
    }
    cout << sum;

    return 0;
}