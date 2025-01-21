#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;
    if (a == 2) return true;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, i = 2, ans = 0, index = 0, count = 0;
    cin >> n;
    
    while (count < n) {
        if (isPrime(i)) {
            index++;
            if (isPrime(index)) {
                ans = i;
                count++;
            }
        }
        i++;
    }
    
    cout << ans << endl;
    return 0;
}
