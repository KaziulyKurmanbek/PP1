#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include <algorithm>

string bin(int n, string& s) {
    if (n == 0) return s.empty() ? "0" : s; 
    s.push_back((n % 2) + '0');         
    bin(n / 2, s);                         
    return s;
}

std::string toBinary(int n) {
    string result;
    bin(n, result);                        
    reverse(result.begin(), result.end()); 
    return result;
}

int main() {
    int num;
    cin>>num;
    cout << toBinary(num) << endl;
    return 0;
}
