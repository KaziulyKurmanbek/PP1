#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;        
    int sum1 = 1;       
    char max = s[0];    
    char max1 = s[0];   

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == max1) {
            sum1++;  
        } else {
            if (sum1 > sum) {
                sum = sum1;
                max = max1;
            }
            sum1 = 1;
            max1 = s[i];
        }
    }

    if (sum1 > sum) {
        sum = sum1;
        max = max1;
    }

    cout << max << " " << sum << endl;

    return 0;
}
