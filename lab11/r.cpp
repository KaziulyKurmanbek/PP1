#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s;
string nov(int n, int k) {
    if (n == 0) return s; 
    char ch;
    if (n % k >= 10)
        ch = char('A' + (n % k) - 10); 
    else
        ch = char('0' + (n % k));     

    s.push_back(ch);                  
    return nov(n / k, k);              
}
int main() {
    int n, k;
    cin >> n >> k; 
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }
    string ans = nov(n, k);
    reverse(ans.begin(), ans.end()); 
    cout << ans << endl; 
    return 0;
}
