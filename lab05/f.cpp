#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0; 
    bool t = true; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[0]) {
            sum++;
        }
    }
    int sum1 = sum;
    for (int i = 0; i < s.size(); i++) {
        sum = sum1;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == s[i]) {
                sum--;
            }
        }
        if (sum != 0) {
            t = false;
        }
    }
    if (t) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}